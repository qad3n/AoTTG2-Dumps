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
	[Address(RVA = "0x573E0B0", Offset = "0x573D0B0", VA = "0x573E0B0")]
	public WaveWriter(string fileName, int sampleRate, int bits, int channels)
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x573F410", Offset = "0x573E410", VA = "0x573F410")]
	public WaveWriter(Stream stream, int sampleRate, int bitsPerSample, int channels)
	{
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x573E450", Offset = "0x573D450", VA = "0x573E450", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x573F990", Offset = "0x573E990", VA = "0x573F990")]
	public void WriteSample(float sample)
	{
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x573E1E0", Offset = "0x573D1E0", VA = "0x573E1E0")]
	public void WriteSamples(float[] samples, int offset, int count)
	{
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x573FC80", Offset = "0x573EC80", VA = "0x573FC80")]
	public void Write(byte[] buffer, int offset, int count)
	{
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x573FC50", Offset = "0x573EC50", VA = "0x573FC50")]
	public void Write(byte value)
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x573F110", Offset = "0x573E110", VA = "0x573F110")]
	public void Write(short value)
	{
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x573FCB0", Offset = "0x573ECB0", VA = "0x573FCB0")]
	public void Write(int value)
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x573FCE0", Offset = "0x573ECE0", VA = "0x573FCE0")]
	public void Write(float value)
	{
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x573F5F0", Offset = "0x573E5F0", VA = "0x573F5F0")]
	private void WriteHeader()
	{
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x573FD10", Offset = "0x573ED10", VA = "0x573FD10", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x573FE80", Offset = "0x573EE80", VA = "0x573FE80", Slot = "1")]
	~WaveWriter()
	{
	}
}
