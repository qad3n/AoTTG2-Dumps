// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AndroidJavaObject
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000007")]
public class AndroidJavaObject : IDisposable
{
	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x0")]
	private static bool enableDebugPrints;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x10")]
	internal GlobalJavaObjectRef m_jobject;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x18")]
	internal GlobalJavaObjectRef m_jclass;

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x2EA3140", Offset = "0x2EA1740", VA = "0x182EA3140")]
	public AndroidJavaObject(string className, params object[] args)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x2EA2FA0", Offset = "0x2EA15A0", VA = "0x182EA2FA0")]
	public AndroidJavaObject(IntPtr jobject)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x2EA2830", Offset = "0x2EA0E30", VA = "0x182EA2830", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x2EA26A0", Offset = "0x2EA0CA0", VA = "0x182EA26A0")]
	public void Call(string methodName, params object[] args)
	{
	}

	[Token(Token = "0x600001C")]
	public FieldType GetStatic<FieldType>(string fieldName)
	{
		return (FieldType)null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x2EA2960", Offset = "0x2EA0F60", VA = "0x182EA2960")]
	public IntPtr GetRawObject()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x1CB0BD0", Offset = "0x1CAF1D0", VA = "0x181CB0BD0")]
	public IntPtr GetRawClass()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600001F")]
	public ReturnType Call<ReturnType>(string methodName, params object[] args)
	{
		return (ReturnType)null;
	}

	[Token(Token = "0x6000020")]
	public ReturnType CallStatic<ReturnType>(string methodName, params object[] args)
	{
		return (ReturnType)null;
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x2EA27C0", Offset = "0x2EA0DC0", VA = "0x182EA27C0")]
	protected void DebugPrint(string msg)
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x2EA2980", Offset = "0x2EA0F80", VA = "0x182EA2980")]
	private void _AndroidJavaObject(string className, params object[] args)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x2EA2BD0", Offset = "0x2EA11D0", VA = "0x182EA2BD0")]
	private void _AndroidJavaObject(IntPtr constructorID, params object[] args)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal AndroidJavaObject()
	{
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x193BBF0", Offset = "0x193A1F0", VA = "0x18193BBF0", Slot = "1")]
	~AndroidJavaObject()
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x2EA2890", Offset = "0x2EA0E90", VA = "0x182EA2890", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x2EA26A0", Offset = "0x2EA0CA0", VA = "0x182EA26A0")]
	protected void _Call(string methodName, params object[] args)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x2EA2DD0", Offset = "0x2EA13D0", VA = "0x182EA2DD0")]
	protected void _Call(IntPtr methodID, params object[] args)
	{
	}

	[Token(Token = "0x6000029")]
	protected ReturnType _Call<ReturnType>(string methodName, params object[] args)
	{
		return (ReturnType)null;
	}

	[Token(Token = "0x600002A")]
	protected ReturnType _Call<ReturnType>(IntPtr methodID, params object[] args)
	{
		return (ReturnType)null;
	}

	[Token(Token = "0x600002B")]
	protected ReturnType _CallStatic<ReturnType>(string methodName, params object[] args)
	{
		return (ReturnType)null;
	}

	[Token(Token = "0x600002C")]
	protected ReturnType _CallStatic<ReturnType>(IntPtr methodID, params object[] args)
	{
		return (ReturnType)null;
	}

	[Token(Token = "0x600002D")]
	protected FieldType _GetStatic<FieldType>(string fieldName)
	{
		return (FieldType)null;
	}

	[Token(Token = "0x600002E")]
	protected FieldType _GetStatic<FieldType>(IntPtr fieldID)
	{
		return (FieldType)null;
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x2EA25D0", Offset = "0x2EA0BD0", VA = "0x182EA25D0")]
	internal static AndroidJavaObject AndroidJavaObjectDeleteLocalRef(IntPtr jobject)
	{
		return null;
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x2EA2500", Offset = "0x2EA0B00", VA = "0x182EA2500")]
	internal static AndroidJavaClass AndroidJavaClassDeleteLocalRef(IntPtr jclass)
	{
		return null;
	}

	[Token(Token = "0x6000031")]
	internal static ReturnType FromJavaArrayDeleteLocalRef<ReturnType>(IntPtr jobject)
	{
		return (ReturnType)null;
	}

	[Token(Token = "0x6000032")]
	internal static ReturnType FromJavaArray<ReturnType>(IntPtr jobject)
	{
		return (ReturnType)null;
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x2EA2960", Offset = "0x2EA0F60", VA = "0x182EA2960")]
	protected IntPtr _GetRawObject()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x1CB0BD0", Offset = "0x1CAF1D0", VA = "0x181CB0BD0")]
	protected IntPtr _GetRawClass()
	{
		return default(IntPtr);
	}
}
