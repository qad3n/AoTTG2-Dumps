// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.MarshalAsAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000484")]
[ComVisible(true)]
[AttributeUsage(AttributeTargets.Field | AttributeTargets.Parameter | AttributeTargets.ReturnValue, Inherited = false)]
public sealed class MarshalAsAttribute : Attribute
{
	[Token(Token = "0x40012DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public string MarshalCookie;

	[Token(Token = "0x40012DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[ComVisible(true)]
	public string MarshalType;

	[Token(Token = "0x40012DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[ComVisible(true)]
	public Type MarshalTypeRef;

	[Token(Token = "0x40012DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public Type SafeArrayUserDefinedSubType;

	[Token(Token = "0x40012DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private UnmanagedType utype;

	[Token(Token = "0x40012E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	public UnmanagedType ArraySubType;

	[Token(Token = "0x40012E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public VarEnum SafeArraySubType;

	[Token(Token = "0x40012E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	public int SizeConst;

	[Token(Token = "0x40012E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public int IidParameterIndex;

	[Token(Token = "0x40012E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	public short SizeParamIndex;

	[Token(Token = "0x17000467")]
	public UnmanagedType Value
	{
		[Token(Token = "0x60022C1")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		get
		{
			return default(UnmanagedType);
		}
	}

	[Token(Token = "0x60022C0")]
	[Address(RVA = "0x1A2B2C0", Offset = "0x1A298C0", VA = "0x181A2B2C0")]
	public MarshalAsAttribute(UnmanagedType unmanagedType)
	{
	}

	[Token(Token = "0x60022C2")]
	[Address(RVA = "0x1A2B260", Offset = "0x1A29860", VA = "0x181A2B260")]
	internal MarshalAsAttribute Copy()
	{
		return null;
	}
}
