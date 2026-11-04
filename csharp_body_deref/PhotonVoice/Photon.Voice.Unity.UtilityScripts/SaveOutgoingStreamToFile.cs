// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.UtilityScripts.SaveOutgoingStreamToFile
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/UtilityScripts/SaveOutgoingStreamToFile.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity.UtilityScripts;

[Token(Token = "0x2000023")]
[RequireComponent(typeof(Recorder))]
[DisallowMultipleComponent]
public class SaveOutgoingStreamToFile : VoiceComponent
{
	[Token(Token = "0x2000024")]
	private class OutgoingStreamSaverFloat : IProcessor<float>, IDisposable
	{
		[Token(Token = "0x40000AD")]
		[FieldOffset(Offset = "0x10")]
		private WaveWriter wavWriter;

		[Token(Token = "0x600014C")]
		[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
		public OutgoingStreamSaverFloat(WaveWriter waveWriter)
		{
		}

		[Token(Token = "0x600014D")]
		[Address(RVA = "0x1D8A650", Offset = "0x1D88C50", VA = "0x181D8A650", Slot = "4")]
		public float[] Process(float[] buf)
		{
			return null;
		}

		[Token(Token = "0x600014E")]
		[Address(RVA = "0x1D8A5E0", Offset = "0x1D88BE0", VA = "0x181D8A5E0", Slot = "5")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x2000025")]
	private class OutgoingStreamSaverShort : IProcessor<short>, IDisposable
	{
		[Token(Token = "0x40000AE")]
		[FieldOffset(Offset = "0x10")]
		private WaveWriter wavWriter;

		[Token(Token = "0x600014F")]
		[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
		public OutgoingStreamSaverShort(WaveWriter waveWriter)
		{
		}

		[Token(Token = "0x6000150")]
		[Address(RVA = "0x1D8A6C0", Offset = "0x1D88CC0", VA = "0x181D8A6C0", Slot = "4")]
		public short[] Process(short[] buf)
		{
			return null;
		}

		[Token(Token = "0x6000151")]
		[Address(RVA = "0x1D8A5E0", Offset = "0x1D88BE0", VA = "0x181D8A5E0", Slot = "5")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x28")]
	private WaveWriter wavWriter;

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x1D92810", Offset = "0x1D90E10", VA = "0x181D92810")]
	private void PhotonVoiceCreated(PhotonVoiceCreatedParams photonVoiceCreatedParams)
	{
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x1D926F0", Offset = "0x1D90CF0", VA = "0x181D926F0")]
	private string GetFilePath()
	{
		return null;
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x1D93010", Offset = "0x1D91610", VA = "0x181D93010")]
	private void PhotonVoiceRemoved()
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x1D8D100", Offset = "0x1D8B700", VA = "0x181D8D100")]
	public SaveOutgoingStreamToFile()
	{
	}
}
