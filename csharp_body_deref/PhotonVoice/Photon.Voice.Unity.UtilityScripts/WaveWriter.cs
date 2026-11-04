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

[Token(Token = "0x2000028")]
public class WaveWriter : IDisposable
{
	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x10")]
	private readonly long _waveStartPosition;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x18")]
	private int _dataLength;

	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x1C")]
	private bool _isDisposed;

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x20")]
	private Stream _stream;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x28")]
	private BinaryWriter _writer;

	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0x30")]
	private int _sampleRate;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x34")]
	private int _bitsPerSample;

	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x38")]
	private int _channels;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x3C")]
	private readonly bool _closeStream;

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x1D9A730", Offset = "0x1D98D30", VA = "0x181D9A730")]
	public WaveWriter(string fileName, int sampleRate, int bits, int channels)
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x1D9A510", Offset = "0x1D98B10", VA = "0x181D9A510")]
	public WaveWriter(Stream stream, int sampleRate, int bitsPerSample, int channels)
	{
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x1D99BE0", Offset = "0x1D981E0", VA = "0x181D99BE0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x1D9A080", Offset = "0x1D98680", VA = "0x181D9A080")]
	public void WriteSample(float sample)
	{
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x1D9A360", Offset = "0x1D98960", VA = "0x181D9A360")]
	public void WriteSamples(float[] samples, int offset, int count)
	{
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x1D9A480", Offset = "0x1D98A80", VA = "0x181D9A480")]
	public void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x1D9A400", Offset = "0x1D98A00", VA = "0x181D9A400")]
	public void Write(byte value)
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x1D9A3C0", Offset = "0x1D989C0", VA = "0x181D9A3C0")]
	public void Write(short value)
	{
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x1D9A4D0", Offset = "0x1D98AD0", VA = "0x181D9A4D0")]
	public void Write(int value)
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x1D9A440", Offset = "0x1D98A40", VA = "0x181D9A440")]
	public void Write(float value)
	{
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x1D99CC0", Offset = "0x1D982C0", VA = "0x181D99CC0")]
	private void WriteHeader()
	{
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x1D99C40", Offset = "0x1D98240", VA = "0x181D99C40", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x193BBF0", Offset = "0x193A1F0", VA = "0x18193BBF0", Slot = "1")]
	~WaveWriter()
	{
	}
}
