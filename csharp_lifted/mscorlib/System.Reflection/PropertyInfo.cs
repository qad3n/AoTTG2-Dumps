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
[Token(Token = "0x20004FA")]
public abstract class PropertyInfo : MemberInfo
{
	[Token(Token = "0x170004DA")]
	public override MemberTypes MemberType
	{
		[Token(Token = "0x60024E3")]
		[Address(RVA = "0x53DB8B0", Offset = "0x53DA8B0", VA = "0x53DB8B0", Slot = "7")]
		get
		{
			return default(MemberTypes);
		}
	}

	[Token(Token = "0x170004DB")]
	public abstract Type PropertyType
	{
		[Token(Token = "0x60024E4")]
		get;
	}

	[Token(Token = "0x170004DC")]
	public abstract PropertyAttributes Attributes
	{
		[Token(Token = "0x60024E6")]
		get;
	}

	[Token(Token = "0x170004DD")]
	public bool IsSpecialName
	{
		[Token(Token = "0x60024E7")]
		[Address(RVA = "0x53DB8C0", Offset = "0x53DA8C0", VA = "0x53DB8C0", Slot = "19")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004DE")]
	public abstract bool CanRead
	{
		[Token(Token = "0x60024E8")]
		get;
	}

	[Token(Token = "0x170004DF")]
	public abstract bool CanWrite
	{
		[Token(Token = "0x60024E9")]
		get;
	}

	[Token(Token = "0x170004E0")]
	public virtual MethodInfo GetMethod
	{
		[Token(Token = "0x60024EA")]
		[Address(RVA = "0x53DB8E0", Offset = "0x53DA8E0", VA = "0x53DB8E0", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60024E2")]
	[Address(RVA = "0x53DB8A0", Offset = "0x53DA8A0", VA = "0x53DB8A0")]
	protected PropertyInfo()
	{
	}

	[Token(Token = "0x60024E5")]
	public abstract ParameterInfo[] GetIndexParameters();

	[Token(Token = "0x60024EB")]
	[Address(RVA = "0x53DB900", Offset = "0x53DA900", VA = "0x53DB900", Slot = "23")]
	public MethodInfo GetGetMethod()
	{
		return null;
	}

	[Token(Token = "0x60024EC")]
	public abstract MethodInfo GetGetMethod(bool nonPublic);

	[Token(Token = "0x60024ED")]
	[Address(RVA = "0x53DB920", Offset = "0x53DA920", VA = "0x53DB920", Slot = "25")]
	public MethodInfo GetSetMethod()
	{
		return null;
	}

	[Token(Token = "0x60024EE")]
	public abstract MethodInfo GetSetMethod(bool nonPublic);

	[Token(Token = "0x60024EF")]
	[Address(RVA = "0x53DB940", Offset = "0x53DA940", VA = "0x53DB940")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	public object GetValue(object obj)
	{
		return null;
	}

	[Token(Token = "0x60024F0")]
	[Address(RVA = "0x53DB960", Offset = "0x53DA960", VA = "0x53DB960", Slot = "27")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	public virtual object GetValue(object obj, object[] index)
	{
		return null;
	}

	[Token(Token = "0x60024F1")]
	public abstract object GetValue(object obj, BindingFlags invokeAttr, Binder binder, object[] index, CultureInfo culture);

	[Token(Token = "0x60024F2")]
	[Address(RVA = "0x53DB990", Offset = "0x53DA990", VA = "0x53DB990")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	public void SetValue(object obj, object value)
	{
	}

	[Token(Token = "0x60024F3")]
	[Address(RVA = "0x53DB9B0", Offset = "0x53DA9B0", VA = "0x53DB9B0", Slot = "29")]
	[DebuggerStepThrough]
	[DebuggerHidden]
	public virtual void SetValue(object obj, object value, object[] index)
	{
	}

	[Token(Token = "0x60024F4")]
	public abstract void SetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, object[] index, CultureInfo culture);

	[Token(Token = "0x60024F5")]
	[Address(RVA = "0x53DB9D0", Offset = "0x53DA9D0", VA = "0x53DB9D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60024F6")]
	[Address(RVA = "0x53DB9E0", Offset = "0x53DA9E0", VA = "0x53DB9E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60024F7")]
	[Address(RVA = "0x53D9C20", Offset = "0x53D8C20", VA = "0x53D9C20")]
	public static bool operator ==(PropertyInfo left, PropertyInfo right)
	{
		return default(bool);
	}

	[Token(Token = "0x60024F8")]
	[Address(RVA = "0x53D9BF0", Offset = "0x53D8BF0", VA = "0x53D9BF0")]
	public static bool operator !=(PropertyInfo left, PropertyInfo right)
	{
		return default(bool);
	}
}
