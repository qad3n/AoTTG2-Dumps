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

[Token(Token = "0x2000006")]
public class AndroidJavaProxy
{
	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x10")]
	public readonly AndroidJavaClass javaInterface;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x18")]
	internal IntPtr proxyObject;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x0")]
	private static readonly GlobalJavaObjectRef s_JavaLangSystemClass;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x8")]
	private static readonly IntPtr s_HashCodeMethodID;

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x2EA4350", Offset = "0x2EA2950", VA = "0x182EA4350")]
	public AndroidJavaProxy(string javaInterface)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x2EA43D0", Offset = "0x2EA29D0", VA = "0x182EA43D0")]
	public AndroidJavaProxy(AndroidJavaClass javaInterface)
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x2EA3180", Offset = "0x2EA1780", VA = "0x182EA3180", Slot = "1")]
	~AndroidJavaProxy()
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x2EA32E0", Offset = "0x2EA18E0", VA = "0x182EA32E0", Slot = "4")]
	public virtual AndroidJavaObject Invoke(string methodName, object[] args)
	{
		return null;
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x2EA3C70", Offset = "0x2EA2270", VA = "0x182EA3C70", Slot = "5")]
	public virtual AndroidJavaObject Invoke(string methodName, AndroidJavaObject[] javaArgs)
	{
		return null;
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x2EA3E30", Offset = "0x2EA2430", VA = "0x182EA3E30", Slot = "6")]
	public virtual IntPtr Invoke(string methodName, IntPtr javaArgs)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x2EA4410", Offset = "0x2EA2A10", VA = "0x182EA4410", Slot = "7")]
	public virtual bool equals(AndroidJavaObject obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x2EA4470", Offset = "0x2EA2A70", VA = "0x182EA4470", Slot = "8")]
	public virtual int hashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x2EA4550", Offset = "0x2EA2B50", VA = "0x182EA4550", Slot = "9")]
	public virtual string toString()
	{
		return null;
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x2EA3200", Offset = "0x2EA1800", VA = "0x182EA3200")]
	internal AndroidJavaObject GetProxyObject()
	{
		return null;
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x2EA3220", Offset = "0x2EA1820", VA = "0x182EA3220")]
	internal IntPtr GetRawProxy()
	{
		return default(IntPtr);
	}
}
