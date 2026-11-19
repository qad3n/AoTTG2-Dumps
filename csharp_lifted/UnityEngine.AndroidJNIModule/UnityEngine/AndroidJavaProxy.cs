// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AndroidJavaProxy
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200000B")]
public class AndroidJavaProxy
{
	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x10")]
	public readonly AndroidJavaClass javaInterface;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x18")]
	internal IntPtr proxyObject;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x0")]
	private static readonly GlobalJavaObjectRef s_JavaLangSystemClass;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x8")]
	private static readonly IntPtr s_HashCodeMethodID;

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x689EB10", Offset = "0x689DB10", VA = "0x689EB10")]
	public AndroidJavaProxy(string javaInterface)
	{
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x689F0B0", Offset = "0x689E0B0", VA = "0x689F0B0")]
	public AndroidJavaProxy(AndroidJavaClass javaInterface)
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x689F0F0", Offset = "0x689E0F0", VA = "0x689F0F0", Slot = "1")]
	~AndroidJavaProxy()
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x689F1A0", Offset = "0x689E1A0", VA = "0x689F1A0", Slot = "4")]
	public virtual AndroidJavaObject Invoke(string methodName, object[] args)
	{
		return null;
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x68A0820", Offset = "0x689F820", VA = "0x68A0820", Slot = "5")]
	public virtual AndroidJavaObject Invoke(string methodName, AndroidJavaObject[] javaArgs)
	{
		return null;
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x689EC40", Offset = "0x689DC40", VA = "0x689EC40", Slot = "6")]
	public virtual IntPtr Invoke(string methodName, IntPtr javaArgs)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x68A1620", Offset = "0x68A0620", VA = "0x68A1620", Slot = "7")]
	public virtual bool equals(AndroidJavaObject obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x68A1680", Offset = "0x68A0680", VA = "0x68A1680", Slot = "8")]
	public virtual int hashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x68A1880", Offset = "0x68A0880", VA = "0x68A1880", Slot = "9")]
	public virtual string toString()
	{
		return null;
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x68A18E0", Offset = "0x68A08E0", VA = "0x68A18E0")]
	internal AndroidJavaObject GetProxyObject()
	{
		return null;
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x68A17D0", Offset = "0x68A07D0", VA = "0x68A17D0")]
	internal IntPtr GetRawProxy()
	{
		return default(IntPtr);
	}
}
