// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.FrameBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/FrameBuffer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200003C")]
public struct FrameBuffer
{
	[Token(Token = "0x40000F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly byte[] array;

	[Token(Token = "0x40000F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private readonly int offset;

	[Token(Token = "0x40000F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	private readonly int count;

	[Token(Token = "0x40000F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly IDisposable disposer;

	[Token(Token = "0x40000F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private bool disposed;

	[Token(Token = "0x40000F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private int refCnt;

	[Token(Token = "0x40000FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private GCHandle gcHandle;

	[Token(Token = "0x40000FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private IntPtr ptr;

	[Token(Token = "0x40000FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool pinned;

	[Token(Token = "0x40000FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static int statDisposerCreated;

	[Token(Token = "0x40000FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	internal static int statDisposerDisposed;

	[Token(Token = "0x40000FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static int statPinned;

	[Token(Token = "0x4000100")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	internal static int statUnpinned;

	[Token(Token = "0x17000050")]
	public IntPtr Ptr
	{
		[Token(Token = "0x6000135")]
		[Address(RVA = "0x3F18270", Offset = "0x3F18270", VA = "0x3F18270")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x17000051")]
	public byte[] Array
	{
		[Token(Token = "0x6000139")]
		[Address(RVA = "0x3F1A510", Offset = "0x3F1A510", VA = "0x3F1A510")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000052")]
	public int Length
	{
		[Token(Token = "0x600013A")]
		[Address(RVA = "0x3F1A520", Offset = "0x3F1A520", VA = "0x3F1A520")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000053")]
	public int Offset
	{
		[Token(Token = "0x600013B")]
		[Address(RVA = "0x3F1A530", Offset = "0x3F1A530", VA = "0x3F1A530")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000054")]
	public readonly FrameFlags Flags
	{
		[Token(Token = "0x600013C")]
		[Address(RVA = "0x3F1A540", Offset = "0x3F1A540", VA = "0x3F1A540")]
		[CompilerGenerated]
		get
		{
			return default(FrameFlags);
		}
	}

	[Token(Token = "0x17000055")]
	public readonly byte FrameNum
	{
		[Token(Token = "0x600013D")]
		[Address(RVA = "0x3F1A550", Offset = "0x3F1A550", VA = "0x3F1A550")]
		[CompilerGenerated]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x17000056")]
	public bool IsFEC
	{
		[Token(Token = "0x600013E")]
		[Address(RVA = "0x3F1A560", Offset = "0x3F1A560", VA = "0x3F1A560")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000057")]
	public bool IsConfig
	{
		[Token(Token = "0x600013F")]
		[Address(RVA = "0x3F1A5B0", Offset = "0x3F1A5B0", VA = "0x3F1A5B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000058")]
	public bool IsKeyframe
	{
		[Token(Token = "0x6000140")]
		[Address(RVA = "0x3F1A610", Offset = "0x3F1A610", VA = "0x3F1A610")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x3F1A290", Offset = "0x3F1A290", VA = "0x3F1A290")]
	public FrameBuffer(byte[] array, int offset, int count, FrameFlags flags, byte frameNum, IDisposable disposer)
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x3F1A300", Offset = "0x3F1A300", VA = "0x3F1A300")]
	public FrameBuffer(byte[] array, FrameFlags flags, byte frameNum)
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x3F1A370", Offset = "0x3F1A370", VA = "0x3F1A370")]
	public FrameBuffer(FrameBuffer from, int offset, int count, FrameFlags flags, byte frameNum)
	{
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x3F1A3D0", Offset = "0x3F1A3D0", VA = "0x3F1A3D0")]
	public void Retain()
	{
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x3F1A3E0", Offset = "0x3F1A3E0", VA = "0x3F1A3E0")]
	public void Release()
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x3F1A440", Offset = "0x3F1A440", VA = "0x3F1A440")]
	private void Dispose()
	{
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x3F1A660", Offset = "0x3F1A660", VA = "0x3F1A660", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
