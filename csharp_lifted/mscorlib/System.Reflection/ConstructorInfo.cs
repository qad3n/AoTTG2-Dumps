// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.ConstructorInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Globalization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x20004DC")]
public abstract class ConstructorInfo : MethodBase
{
	[Token(Token = "0x4001337")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string ConstructorName;

	[Token(Token = "0x4001338")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string TypeConstructorName;

	[Token(Token = "0x170004A2")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x6002435")]
		[Address(RVA = "0x53D79C0", Offset = "0x53D69C0", VA = "0x53D79C0", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x6002434")]
	[Address(RVA = "0x53D79A0", Offset = "0x53D69A0", VA = "0x53D79A0")]
	protected ConstructorInfo()
	{
	}

	[Token(Token = "0x6002436")]
	[Address(RVA = "0x53D79D0", Offset = "0x53D69D0", VA = "0x53D79D0")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	public object Invoke(object[] parameters)
	{
		return null;
	}

	[Token(Token = "0x6002437")]
	public abstract object Invoke(BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture);

	[Token(Token = "0x6002438")]
	[Address(RVA = "0x53D7A00", Offset = "0x53D6A00", VA = "0x53D7A00", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002439")]
	[Address(RVA = "0x53D7A20", Offset = "0x53D6A20", VA = "0x53D7A20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600243A")]
	[Address(RVA = "0x53D7A40", Offset = "0x53D6A40", VA = "0x53D7A40")]
	public static bool operator ==(ConstructorInfo left, ConstructorInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x600243B")]
	[Address(RVA = "0x53D7A70", Offset = "0x53D6A70", VA = "0x53D7A70")]
	public static bool operator !=(ConstructorInfo left, ConstructorInfo right)
	{
		return default(bool);
	}
}
