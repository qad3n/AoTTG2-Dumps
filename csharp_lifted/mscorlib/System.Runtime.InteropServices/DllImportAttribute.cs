// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.DllImportAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x2000453")]
[ComVisible(true)]
[AttributeUsage(AttributeTargets.Method, Inherited = false)]
public sealed class DllImportAttribute : Attribute
{
	[Token(Token = "0x400121A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal string _val;

	[Token(Token = "0x400121B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public string EntryPoint;

	[Token(Token = "0x400121C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public CharSet CharSet;

	[Token(Token = "0x400121D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	public bool SetLastError;

	[Token(Token = "0x400121E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x25")]
	public bool ExactSpelling;

	[Token(Token = "0x400121F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x26")]
	public bool PreserveSig;

	[Token(Token = "0x4001220")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public CallingConvention CallingConvention;

	[Token(Token = "0x4001221")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	public bool BestFitMapping;

	[Token(Token = "0x4001222")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2D")]
	public bool ThrowOnUnmappableChar;

	[Token(Token = "0x17000461")]
	public string Value
	{
		[Token(Token = "0x6002221")]
		[Address(RVA = "0x53C4ED0", Offset = "0x53C3ED0", VA = "0x53C4ED0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600221D")]
	[Address(RVA = "0x53C4C10", Offset = "0x53C3C10", VA = "0x53C4C10")]
	internal static Attribute GetCustomAttribute(System.Reflection.RuntimeMethodInfo method)
	{
		return null;
	}

	[Token(Token = "0x600221E")]
	[Address(RVA = "0x53C4E70", Offset = "0x53C3E70", VA = "0x53C4E70")]
	internal static bool IsDefined(System.Reflection.RuntimeMethodInfo method)
	{
		return default(bool);
	}

	[Token(Token = "0x600221F")]
	[Address(RVA = "0x53C4DF0", Offset = "0x53C3DF0", VA = "0x53C4DF0")]
	internal DllImportAttribute(string dllName, string entryPoint, CharSet charSet, bool exactSpelling, bool setLastError, bool preserveSig, CallingConvention callingConvention, bool bestFitMapping, bool throwOnUnmappableChar)
	{
	}

	[Token(Token = "0x6002220")]
	[Address(RVA = "0x53C4EA0", Offset = "0x53C3EA0", VA = "0x53C4EA0")]
	public DllImportAttribute(string dllName)
	{
	}
}
