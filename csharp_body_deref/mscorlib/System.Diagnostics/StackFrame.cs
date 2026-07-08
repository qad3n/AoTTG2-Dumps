using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Diagnostics;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x20005E6")]
[System.MonoTODO("Serialized objects are not compatible with MS.NET")]
[ComVisible(true)]
public class StackFrame
{
	[Token(Token = "0x4001A0B")]
	public const int OFFSET_UNKNOWN = -1;

	[Token(Token = "0x4001A0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int ilOffset;

	[Token(Token = "0x4001A0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int nativeOffset;

	[Token(Token = "0x4001A0E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private long methodAddress;

	[Token(Token = "0x4001A0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private uint methodIndex;

	[Token(Token = "0x4001A10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private MethodBase methodBase;

	[Token(Token = "0x4001A11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string fileName;

	[Token(Token = "0x4001A12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private int lineNumber;

	[Token(Token = "0x4001A13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	private int columnNumber;

	[Token(Token = "0x4001A14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string internalMethodName;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002E68")]
	[Address(RVA = "0x4F94D30", Offset = "0x4F94D30", VA = "0x4F94D30")]
	private static extern bool get_frame_info(int skip, bool needFileInfo, out MethodBase method, out int iloffset, out int native_offset, out string file, out int line, out int column);

	[Token(Token = "0x6002E69")]
	[Address(RVA = "0x4F94D40", Offset = "0x4F94D40", VA = "0x4F94D40")]
	public StackFrame()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6002E6A")]
	[Address(RVA = "0x4F94D80", Offset = "0x4F94D80", VA = "0x4F94D80")]
	public StackFrame(int skipFrames, bool fNeedFileInfo)
	{
	}

	[Token(Token = "0x6002E6B")]
	[Address(RVA = "0x4F94DD0", Offset = "0x4F94DD0", VA = "0x4F94DD0", Slot = "4")]
	public virtual int GetFileLineNumber()
	{
		return default(int);
	}

	[Token(Token = "0x6002E6C")]
	[Address(RVA = "0x4F94DE0", Offset = "0x4F94DE0", VA = "0x4F94DE0", Slot = "5")]
	public virtual string GetFileName()
	{
		return null;
	}

	[Token(Token = "0x6002E6D")]
	[Address(RVA = "0x4F94DF0", Offset = "0x4F94DF0", VA = "0x4F94DF0")]
	internal string GetSecureFileName()
	{
		return null;
	}

	[Token(Token = "0x6002E6E")]
	[Address(RVA = "0x4F94EC0", Offset = "0x4F94EC0", VA = "0x4F94EC0", Slot = "6")]
	public virtual int GetILOffset()
	{
		return default(int);
	}

	[Token(Token = "0x6002E6F")]
	[Address(RVA = "0x4F94ED0", Offset = "0x4F94ED0", VA = "0x4F94ED0", Slot = "7")]
	public virtual MethodBase GetMethod()
	{
		return null;
	}

	[Token(Token = "0x6002E70")]
	[Address(RVA = "0x4F94EE0", Offset = "0x4F94EE0", VA = "0x4F94EE0", Slot = "8")]
	public virtual int GetNativeOffset()
	{
		return default(int);
	}

	[Token(Token = "0x6002E71")]
	[Address(RVA = "0x4F94EF0", Offset = "0x4F94EF0", VA = "0x4F94EF0")]
	internal long GetMethodAddress()
	{
		return default(long);
	}

	[Token(Token = "0x6002E72")]
	[Address(RVA = "0x4F94F00", Offset = "0x4F94F00", VA = "0x4F94F00")]
	internal uint GetMethodIndex()
	{
		return default(uint);
	}

	[Token(Token = "0x6002E73")]
	[Address(RVA = "0x4F94F10", Offset = "0x4F94F10", VA = "0x4F94F10")]
	internal string GetInternalMethodName()
	{
		return null;
	}

	[Token(Token = "0x6002E74")]
	[Address(RVA = "0x4F94F20", Offset = "0x4F94F20", VA = "0x4F94F20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
