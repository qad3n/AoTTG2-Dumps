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

[Token(Token = "0x200000A")]
public class AndroidJavaProxy
{
	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x10")]
	public readonly AndroidJavaClass javaInterface;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x18")]
	internal IntPtr proxyObject;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x0")]
	private static readonly GlobalJavaObjectRef s_JavaLangSystemClass;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x8")]
	private static readonly IntPtr s_HashCodeMethodID;

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x4D99940", Offset = "0x4D99940", VA = "0x4D99940")]
	public AndroidJavaProxy(string javaInterface)
	{
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x4D99F20", Offset = "0x4D99F20", VA = "0x4D99F20")]
	public AndroidJavaProxy(AndroidJavaClass javaInterface)
	{
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x4D99F60", Offset = "0x4D99F60", VA = "0x4D99F60", Slot = "1")]
	~AndroidJavaProxy()
	{
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x4D9A020", Offset = "0x4D9A020", VA = "0x4D9A020", Slot = "4")]
	public virtual AndroidJavaObject Invoke(string methodName, object[] args)
	{
		return null;
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x4D9B970", Offset = "0x4D9B970", VA = "0x4D9B970", Slot = "5")]
	public virtual AndroidJavaObject Invoke(string methodName, AndroidJavaObject[] javaArgs)
	{
		return null;
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x4D99A70", Offset = "0x4D99A70", VA = "0x4D99A70", Slot = "6")]
	public virtual IntPtr Invoke(string methodName, IntPtr javaArgs)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x4D9CDB0", Offset = "0x4D9CDB0", VA = "0x4D9CDB0", Slot = "7")]
	public virtual bool equals(AndroidJavaObject obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x4D9CE10", Offset = "0x4D9CE10", VA = "0x4D9CE10", Slot = "8")]
	public virtual int hashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x4D9CF60", Offset = "0x4D9CF60", VA = "0x4D9CF60", Slot = "9")]
	public virtual string toString()
	{
		return null;
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x4D9CFC0", Offset = "0x4D9CFC0", VA = "0x4D9CFC0")]
	internal AndroidJavaObject GetProxyObject()
	{
		return null;
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x4D9B7A0", Offset = "0x4D9B7A0", VA = "0x4D9B7A0")]
	internal IntPtr GetRawProxy()
	{
		return default(IntPtr);
	}
}
