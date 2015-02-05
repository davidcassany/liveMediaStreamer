/*
 *  Types - AV types
 *  Copyright (C) 2013  Fundació i2CAT, Internet i Innovació digital a Catalunya
 *
 *  This file is part of media-streamer.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  Authors:  Marc Palau <marc.palau@i2cat.net>
 */

#ifndef _TYPES_HH
#define _TYPES_HH

#define DEFAULT_HEIGHT 1080
#define DEFAULT_WIDTH 1920
#define DEFAULT_BYTES_PER_PIXEL 3
#define DEFAULT_VIDEO_FRAMES 50
#define DEFAULT_RAW_FRAMES 10
#define LENGTH_H264 512*1024 //512KB
#define LENGTH_VP8 512*1024 //512KB
#define FRAMES_OPUS 100
#define LENGTH_OPUS 2000
#define FRAMES_AUDIO_RAW 2000
#define AUDIO_FRAME_TIME 100 //ms
#define DEFAULT_FRAME_SAMPLES 960

enum VCodecType {VC_NONE = -1, H264, VP8, MJPEG, RAW};

enum PixType {P_NONE = -1, RGB24, RGB32, YUV420P, YUV422P, YUV444P, YUYV422, YUVJ420P};

enum ACodecType {AC_NONE = -1, G711, PCMU, OPUS, PCM, AAC, MP3};

enum SampleFmt {S_NONE = -1, U8, S16, FLT, U8P, S16P, FLTP};

enum FilterType {FT_NONE = -1, RECEIVER, TRANSMITTER, VIDEO_DECODER, VIDEO_ENCODER, VIDEO_RESAMPLER, VIDEO_MIXER, AUDIO_DECODER, AUDIO_ENCODER, AUDIO_MIXER};

enum FilterRole {FR_NONE = -1, NETWORK, MASTER, SLAVE};

enum WorkerType {W_NONE = -1, LIVEMEDIA, WORKER};

enum TxFormat {TX_NONE = -1, STD_RTP, ULTRAGRID, MPEGTS};

#endif
