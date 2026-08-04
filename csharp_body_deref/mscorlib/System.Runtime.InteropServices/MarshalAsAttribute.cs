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
[Token(Token = "0x2000455")]
[ComVisible(true)]
[AttributeUsage(AttributeTargets.Field | AttributeTargets.Parameter | AttributeTargets.ReturnValue, Inherited = false)]
public sealed class MarshalAsAttribute : Attribute
{
	[Token(Token = "0x40012D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public string MarshalCookie;

	[Token(Token = "0x40012DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[ComVisible(true)]
	public string MarshalType;

	[Token(Token = "0x40012DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[ComVisible(true)]
	public Type MarshalTypeRef;

	[Token(Token = "0x40012DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public Type SafeArrayUserDefinedSubType;

	[Token(Token = "0x40012DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private UnmanagedType utype;

	[Token(Token = "0x40012DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	public UnmanagedType ArraySubType;

	[Token(Token = "0x40012DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public VarEnum SafeArraySubType;

	[Token(Token = "0x40012E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	public int SizeConst;

	[Token(Token = "0x40012E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public int IidParameterIndex;

	[Token(Token = "0x40012E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	public short SizeParamIndex;

	[Token(Token = "0x17000464")]
	public UnmanagedType Value
	{
		[Token(Token = "0x6002241")]
		[Address(RVA = "0x3BC0450", Offset = "0x3BC0450", VA = "0x3BC0450")]
		get
		{
			return default(UnmanagedType);
		}
	}

	[Token(Token = "0x6002240")]
	[Address(RVA = "0x3BC0430", Offset = "0x3BC0430", VA = "0x3BC0430")]
	public MarshalAsAttribute(UnmanagedType unmanagedType)
	{
	}

	[Token(Token = "0x6002242")]
	[Address(RVA = "0x3BC0460", Offset = "0x3BC0460", VA = "0x3BC0460")]
	internal MarshalAsAttribute Copy()
	{
		return null;
	}
}
