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
[Token(Token = "0x20004D3")]
public abstract class ConstructorInfo : MethodBase
{
	[Token(Token = "0x40013D7")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string ConstructorName;

	[Token(Token = "0x40013D8")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string TypeConstructorName;

	[Token(Token = "0x170004A0")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x60023E5")]
		[Address(RVA = "0x3BD0760", Offset = "0x3BD0760", VA = "0x3BD0760", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x60023E4")]
	[Address(RVA = "0x3BD0740", Offset = "0x3BD0740", VA = "0x3BD0740")]
	protected ConstructorInfo()
	{
	}

	[Token(Token = "0x60023E6")]
	[Address(RVA = "0x3BD0770", Offset = "0x3BD0770", VA = "0x3BD0770")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	public object Invoke(object[] parameters)
	{
		return null;
	}

	[Token(Token = "0x60023E7")]
	public abstract object Invoke(BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture);

	[Token(Token = "0x60023E8")]
	[Address(RVA = "0x3BD07A0", Offset = "0x3BD07A0", VA = "0x3BD07A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60023E9")]
	[Address(RVA = "0x3BD07C0", Offset = "0x3BD07C0", VA = "0x3BD07C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60023EA")]
	[Address(RVA = "0x3BD07E0", Offset = "0x3BD07E0", VA = "0x3BD07E0")]
	public static bool operator ==(ConstructorInfo left, ConstructorInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x60023EB")]
	[Address(RVA = "0x3BD0810", Offset = "0x3BD0810", VA = "0x3BD0810")]
	public static bool operator !=(ConstructorInfo left, ConstructorInfo right)
	{
		return default(bool);
	}
}
