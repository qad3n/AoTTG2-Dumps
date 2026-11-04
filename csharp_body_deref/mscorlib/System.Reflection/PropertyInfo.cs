// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.PropertyInfo
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
[Token(Token = "0x2000521")]
public abstract class PropertyInfo : MemberInfo
{
	[Token(Token = "0x170004DB")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x6002515")]
		[Address(RVA = "0x846EF0", Offset = "0x8454F0", VA = "0x180846EF0", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x170004DC")]
	public abstract Type PropertyType
	{
		[Token(Token = "0x6002516")]
		get;
	}

	[Token(Token = "0x170004DD")]
	public abstract PropertyAttributes Attributes
	{
		[Token(Token = "0x6002518")]
		get;
	}

	[Token(Token = "0x170004DE")]
	public bool IsSpecialName
	{
		[Token(Token = "0x6002519")]
		[Address(RVA = "0x1A4C260", Offset = "0x1A4A860", VA = "0x181A4C260", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004DF")]
	public abstract bool CanRead
	{
		[Token(Token = "0x600251A")]
		get;
	}

	[Token(Token = "0x170004E0")]
	public abstract bool CanWrite
	{
		[Token(Token = "0x600251B")]
		get;
	}

	[Token(Token = "0x170004E1")]
	public virtual MethodInfo GetMethod
	{
		[Token(Token = "0x600251C")]
		[Address(RVA = "0x1A4C240", Offset = "0x1A4A840", VA = "0x181A4C240", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002514")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected PropertyInfo()
	{
	}

	[Token(Token = "0x6002517")]
	public abstract ParameterInfo[] GetIndexParameters();

	[Token(Token = "0x600251D")]
	[Address(RVA = "0x1A4C160", Offset = "0x1A4A760", VA = "0x181A4C160", Slot = "23")]
	public MethodInfo GetGetMethod()
	{
		return null;
	}

	[Token(Token = "0x600251E")]
	public abstract MethodInfo GetGetMethod(bool nonPublic);

	[Token(Token = "0x600251F")]
	[Address(RVA = "0x1A4C180", Offset = "0x1A4A780", VA = "0x181A4C180", Slot = "25")]
	public MethodInfo GetSetMethod()
	{
		return null;
	}

	[Token(Token = "0x6002520")]
	public abstract MethodInfo GetSetMethod(bool nonPublic);

	[Token(Token = "0x6002521")]
	[Address(RVA = "0x1A4C1A0", Offset = "0x1A4A7A0", VA = "0x181A4C1A0")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	public object GetValue(object obj)
	{
		return null;
	}

	[Token(Token = "0x6002522")]
	[Address(RVA = "0x1A4C1C0", Offset = "0x1A4A7C0", VA = "0x181A4C1C0", Slot = "27")]
	[DebuggerHidden]
	[DebuggerStepThrough]
	public virtual object GetValue(object obj, object[] index)
	{
		return null;
	}

	[Token(Token = "0x6002523")]
	public abstract object GetValue(object obj, BindingFlags invokeAttr, Binder binder, object[] index, CultureInfo culture);

	[Token(Token = "0x6002524")]
	[Address(RVA = "0x1A40C90", Offset = "0x1A3F290", VA = "0x181A40C90")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	public void SetValue(object obj, object value)
	{
	}

	[Token(Token = "0x6002525")]
	[Address(RVA = "0x1A4C200", Offset = "0x1A4A800", VA = "0x181A4C200", Slot = "29")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	public virtual void SetValue(object obj, object value, object[] index)
	{
	}

	[Token(Token = "0x6002526")]
	public abstract void SetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, object[] index, CultureInfo culture);

	[Token(Token = "0x6002527")]
	[Address(RVA = "0x1A40580", Offset = "0x1A3EB80", VA = "0x181A40580", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002528")]
	[Address(RVA = "0x198AC80", Offset = "0x1989280", VA = "0x18198AC80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002529")]
	[Address(RVA = "0x1A41670", Offset = "0x1A3FC70", VA = "0x181A41670")]
	public static bool operator ==(PropertyInfo left, PropertyInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x600252A")]
	[Address(RVA = "0x1A44730", Offset = "0x1A42D30", VA = "0x181A44730")]
	public static bool operator !=(PropertyInfo left, PropertyInfo right)
	{
		return default(bool);
	}
}
