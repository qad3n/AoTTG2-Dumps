// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.UtilityScripts.WaveWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/UtilityScripts/WaveWriter.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.IO;
using Il2CppDummyDll;

namespace Photon.Voice.Unity.UtilityScripts;

[Token(Token = "0x200002A")]
public class WaveWriter : IDisposable
{
	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0x10")]
	private readonly long _waveStartPosition;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x18")]
	private int _dataLength;

	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x1C")]
	private bool _isDisposed;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x20")]
	private Stream _stream;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x28")]
	private BinaryWriter _writer;

	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x30")]
	private int _sampleRate;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x34")]
	private int _bitsPerSample;

	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x38")]
	private int _channels;

	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x3C")]
	private readonly bool _closeStream;

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x3F544B0", Offset = "0x3F544B0", VA = "0x3F544B0")]
	public WaveWriter(string fileName, int sampleRate, int bits, int channels)
	{
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x3F55860", Offset = "0x3F55860", VA = "0x3F55860")]
	public WaveWriter(Stream stream, int sampleRate, int bitsPerSample, int channels)
	{
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x3F54860", Offset = "0x3F54860", VA = "0x3F54860", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x3F55DE0", Offset = "0x3F55DE0", VA = "0x3F55DE0")]
	public void WriteSample(float sample)
	{
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x3F545F0", Offset = "0x3F545F0", VA = "0x3F545F0")]
	public void WriteSamples(float[] samples, int offset, int count)
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x3F560C0", Offset = "0x3F560C0", VA = "0x3F560C0")]
	public void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x3F56090", Offset = "0x3F56090", VA = "0x3F56090")]
	public void Write(byte value)
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x3F55560", Offset = "0x3F55560", VA = "0x3F55560")]
	public void Write(short value)
	{
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x3F560F0", Offset = "0x3F560F0", VA = "0x3F560F0")]
	public void Write(int value)
	{
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x3F56120", Offset = "0x3F56120", VA = "0x3F56120")]
	public void Write(float value)
	{
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x3F55A40", Offset = "0x3F55A40", VA = "0x3F55A40")]
	private void WriteHeader()
	{
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x3F56150", Offset = "0x3F56150", VA = "0x3F56150", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x3F56320", Offset = "0x3F56320", VA = "0x3F56320", Slot = "1")]
	~WaveWriter()
	{
	}
}
