#include <bass.h>
#include <windows.h>

#define DLLEXPORT __declspec (dllexport)

DLLEXPORT double gmbass_init()
{
  return (double)BASS_Init(-1, 48000, BASS_DEVICE_STEREO, GetActiveWindow(), NULL);
}

DLLEXPORT double gmbass_free()
{
  return (double)BASS_Free();
}

DLLEXPORT double gmbass_error_get_code()
{
  return (double)BASS_ErrorGetCode();
}

DLLEXPORT double gmbass_music_load(char* path)
{
  return (double)BASS_MusicLoad(FALSE, path, 0, 0, BASS_SAMPLE_LOOP, 0);
}

DLLEXPORT double gmbass_music_free(double handle)
{
  return (double)BASS_MusicFree((HMUSIC)handle);
}

DLLEXPORT double gmbass_channel_play(double handle, double restart)
{
  return (double)BASS_ChannelPlay((DWORD)handle, (BOOL)restart);
}

DLLEXPORT double gmbass_channel_pause(double handle)
{
  return (double)BASS_ChannelPause((DWORD)handle);
}

DLLEXPORT double gmbass_channel_stop(double handle)
{
  return (double)BASS_ChannelStop((DWORD)handle);
}