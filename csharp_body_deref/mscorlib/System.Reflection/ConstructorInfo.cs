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
[Token(Token = "0x2000503")]
public abstract class ConstructorInfo : MethodBase
{
	[Token(Token = "0x40013D7")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string ConstructorName;

	[Token(Token = "0x40013D8")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string TypeConstructorName;

	[Token(Token = "0x170004A3")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x6002467")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x6002466")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected ConstructorInfo()
	{
	}

	[Token(Token = "0x6002468")]
	[Address(RVA = "0x1A41580", Offset = "0x1A3FB80", VA = "0x181A41580")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	public object Invoke(object[] parameters)
	{
		return null;
	}

	[Token(Token = "0x6002469")]
	public abstract object Invoke(BindingFlags invokeAttr, Binder binder, object[] parameters, CultureInfo culture);

	[Token(Token = "0x600246A")]
	[Address(RVA = "0x1A40580", Offset = "0x1A3EB80", VA = "0x181A40580", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600246B")]
	[Address(RVA = "0x198AC80", Offset = "0x1989280", VA = "0x18198AC80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600246C")]
	[Address(RVA = "0x1A41670", Offset = "0x1A3FC70", VA = "0x181A41670")]
	public static bool operator ==(ConstructorInfo left, ConstructorInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x600246D")]
	[Address(RVA = "0x1A416A0", Offset = "0x1A3FCA0", VA = "0x181A416A0")]
	public static bool operator !=(ConstructorInfo left, ConstructorInfo right)
	{
		return default(bool);
	}
}
