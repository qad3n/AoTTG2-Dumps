using System;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity.UtilityScripts;

[Token(Token = "0x2000025")]
[RequireComponent(typeof(Recorder))]
[DisallowMultipleComponent]
public class SaveOutgoingStreamToFile : VoiceComponent
{
	[Token(Token = "0x2000026")]
	private class OutgoingStreamSaverFloat : IProcessor<float>, IDisposable
	{
		[Token(Token = "0x40000B2")]
		[FieldOffset(Offset = "0x10")]
		private WaveWriter wavWriter;

		[Token(Token = "0x600014E")]
		[Address(RVA = "0x3C62B70", Offset = "0x3C62B70", VA = "0x3C62B70")]
		public OutgoingStreamSaverFloat(WaveWriter waveWriter)
		{
		}

		[Token(Token = "0x600014F")]
		[Address(RVA = "0x3C62E40", Offset = "0x3C62E40", VA = "0x3C62E40", Slot = "4")]
		public float[] Process(float[] buf)
		{
			return null;
		}

		[Token(Token = "0x6000150")]
		[Address(RVA = "0x3C62EB0", Offset = "0x3C62EB0", VA = "0x3C62EB0", Slot = "5")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x2000027")]
	private class OutgoingStreamSaverShort : IProcessor<short>, IDisposable
	{
		[Token(Token = "0x40000B3")]
		[FieldOffset(Offset = "0x10")]
		private WaveWriter wavWriter;

		[Token(Token = "0x6000151")]
		[Address(RVA = "0x3C62BA0", Offset = "0x3C62BA0", VA = "0x3C62BA0")]
		public OutgoingStreamSaverShort(WaveWriter waveWriter)
		{
		}

		[Token(Token = "0x6000152")]
		[Address(RVA = "0x3C62F30", Offset = "0x3C62F30", VA = "0x3C62F30", Slot = "4")]
		public short[] Process(short[] buf)
		{
			return null;
		}

		[Token(Token = "0x6000153")]
		[Address(RVA = "0x3C62FE0", Offset = "0x3C62FE0", VA = "0x3C62FE0", Slot = "5")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x28")]
	private WaveWriter wavWriter;

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x3C62320", Offset = "0x3C62320", VA = "0x3C62320")]
	private void PhotonVoiceCreated(PhotonVoiceCreatedParams photonVoiceCreatedParams)
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x3C62A40", Offset = "0x3C62A40", VA = "0x3C62A40")]
	private string GetFilePath()
	{
		return null;
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x3C62BD0", Offset = "0x3C62BD0", VA = "0x3C62BD0")]
	private void PhotonVoiceRemoved()
	{
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x3C62DE0", Offset = "0x3C62DE0", VA = "0x3C62DE0")]
	public SaveOutgoingStreamToFile()
	{
	}
}
