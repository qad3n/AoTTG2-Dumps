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
		[Address(RVA = "0x573ECD0", Offset = "0x573DCD0", VA = "0x573ECD0")]
		public OutgoingStreamSaverFloat(WaveWriter waveWriter)
		{
		}

		[Token(Token = "0x600014D")]
		[Address(RVA = "0x573EFA0", Offset = "0x573DFA0", VA = "0x573EFA0", Slot = "4")]
		public float[] Process(float[] buf)
		{
			return null;
		}

		[Token(Token = "0x600014E")]
		[Address(RVA = "0x573F010", Offset = "0x573E010", VA = "0x573F010", Slot = "5")]
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
		[Address(RVA = "0x573ED00", Offset = "0x573DD00", VA = "0x573ED00")]
		public OutgoingStreamSaverShort(WaveWriter waveWriter)
		{
		}

		[Token(Token = "0x6000150")]
		[Address(RVA = "0x573F090", Offset = "0x573E090", VA = "0x573F090", Slot = "4")]
		public short[] Process(short[] buf)
		{
			return null;
		}

		[Token(Token = "0x6000151")]
		[Address(RVA = "0x573F140", Offset = "0x573E140", VA = "0x573F140", Slot = "5")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x28")]
	private WaveWriter wavWriter;

	[Token(Token = "0x6000148")]
	[Address(RVA = "0x573E4C0", Offset = "0x573D4C0", VA = "0x573E4C0")]
	private void PhotonVoiceCreated(PhotonVoiceCreatedParams photonVoiceCreatedParams)
	{
	}

	[Token(Token = "0x6000149")]
	[Address(RVA = "0x573EBB0", Offset = "0x573DBB0", VA = "0x573EBB0")]
	private string GetFilePath()
	{
		return null;
	}

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x573ED30", Offset = "0x573DD30", VA = "0x573ED30")]
	private void PhotonVoiceRemoved()
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x573EF40", Offset = "0x573DF40", VA = "0x573EF40")]
	public SaveOutgoingStreamToFile()
	{
	}
}
