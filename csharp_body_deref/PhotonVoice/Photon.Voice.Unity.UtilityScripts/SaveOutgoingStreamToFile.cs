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
		[Address(RVA = "0x3F55120", Offset = "0x3F55120", VA = "0x3F55120")]
		public OutgoingStreamSaverFloat(WaveWriter waveWriter)
		{
		}

		[Token(Token = "0x600014F")]
		[Address(RVA = "0x3F553F0", Offset = "0x3F553F0", VA = "0x3F553F0", Slot = "4")]
		public float[] Process(float[] buf)
		{
			return null;
		}

		[Token(Token = "0x6000150")]
		[Address(RVA = "0x3F55460", Offset = "0x3F55460", VA = "0x3F55460", Slot = "5")]
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
		[Address(RVA = "0x3F55150", Offset = "0x3F55150", VA = "0x3F55150")]
		public OutgoingStreamSaverShort(WaveWriter waveWriter)
		{
		}

		[Token(Token = "0x6000152")]
		[Address(RVA = "0x3F554E0", Offset = "0x3F554E0", VA = "0x3F554E0", Slot = "4")]
		public short[] Process(short[] buf)
		{
			return null;
		}

		[Token(Token = "0x6000153")]
		[Address(RVA = "0x3F55590", Offset = "0x3F55590", VA = "0x3F55590", Slot = "5")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x28")]
	private WaveWriter wavWriter;

	[Token(Token = "0x600014A")]
	[Address(RVA = "0x3F548D0", Offset = "0x3F548D0", VA = "0x3F548D0")]
	private void PhotonVoiceCreated(PhotonVoiceCreatedParams photonVoiceCreatedParams)
	{
	}

	[Token(Token = "0x600014B")]
	[Address(RVA = "0x3F54FF0", Offset = "0x3F54FF0", VA = "0x3F54FF0")]
	private string GetFilePath()
	{
		return null;
	}

	[Token(Token = "0x600014C")]
	[Address(RVA = "0x3F55180", Offset = "0x3F55180", VA = "0x3F55180")]
	private void PhotonVoiceRemoved()
	{
	}

	[Token(Token = "0x600014D")]
	[Address(RVA = "0x3F55390", Offset = "0x3F55390", VA = "0x3F55390")]
	public SaveOutgoingStreamToFile()
	{
	}
}
