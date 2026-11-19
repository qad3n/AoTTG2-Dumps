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

[Token(Token = "0x200000C")]
public class AndroidJavaObject : IDisposable
{
	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x0")]
	private static bool enableDebugPrints;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x10")]
	internal GlobalJavaObjectRef m_jobject;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x18")]
	internal GlobalJavaObjectRef m_jclass;

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x68A1B20", Offset = "0x68A0B20", VA = "0x68A1B20")]
	public AndroidJavaObject(string className, params object[] args)
	{
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x68A0680", Offset = "0x689F680", VA = "0x68A0680")]
	public AndroidJavaObject(IntPtr jobject)
	{
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x68A1490", Offset = "0x68A0490", VA = "0x68A1490", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x68A1D50", Offset = "0x68A0D50", VA = "0x68A1D50")]
	public void Call(string methodName, params object[] args)
	{
	}

	[Token(Token = "0x60000F8")]
	public FieldType GetStatic<FieldType>(string fieldName)
	{
		return (FieldType)null;
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x68A1600", Offset = "0x68A0600", VA = "0x68A1600")]
	public IntPtr GetRawObject()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x68A1E70", Offset = "0x68A0E70", VA = "0x68A1E70")]
	public IntPtr GetRawClass()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000FB")]
	public ReturnType Call<ReturnType>(string methodName, params object[] args)
	{
		return (ReturnType)null;
	}

	[Token(Token = "0x60000FC")]
	public ReturnType CallStatic<ReturnType>(string methodName, params object[] args)
	{
		return (ReturnType)null;
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x68A1EB0", Offset = "0x68A0EB0", VA = "0x68A1EB0")]
	protected void DebugPrint(string msg)
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x68A1B60", Offset = "0x68A0B60", VA = "0x68A1B60")]
	private void _AndroidJavaObject(string className, params object[] args)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x68A1F30", Offset = "0x68A0F30", VA = "0x68A1F30")]
	private void _AndroidJavaObject(IntPtr constructorID, params object[] args)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x68A1B50", Offset = "0x68A0B50", VA = "0x68A1B50")]
	internal AndroidJavaObject()
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x68A2180", Offset = "0x68A1180", VA = "0x68A2180", Slot = "1")]
	~AndroidJavaObject()
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x68A2220", Offset = "0x68A1220", VA = "0x68A2220", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x68A1DD0", Offset = "0x68A0DD0", VA = "0x68A1DD0")]
	protected void _Call(string methodName, params object[] args)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x68A22E0", Offset = "0x68A12E0", VA = "0x68A22E0")]
	protected void _Call(IntPtr methodID, params object[] args)
	{
	}

	[Token(Token = "0x6000105")]
	protected ReturnType _Call<ReturnType>(string methodName, params object[] args)
	{
		return (ReturnType)null;
	}

	[Token(Token = "0x6000106")]
	protected ReturnType _Call<ReturnType>(IntPtr methodID, params object[] args)
	{
		return (ReturnType)null;
	}

	[Token(Token = "0x6000107")]
	protected ReturnType _CallStatic<ReturnType>(string methodName, params object[] args)
	{
		return (ReturnType)null;
	}

	[Token(Token = "0x6000108")]
	protected ReturnType _CallStatic<ReturnType>(IntPtr methodID, params object[] args)
	{
		return (ReturnType)null;
	}

	[Token(Token = "0x6000109")]
	protected FieldType _GetStatic<FieldType>(string fieldName)
	{
		return (FieldType)null;
	}

	[Token(Token = "0x600010A")]
	protected FieldType _GetStatic<FieldType>(IntPtr fieldID)
	{
		return (FieldType)null;
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x68A1500", Offset = "0x68A0500", VA = "0x68A1500")]
	internal static AndroidJavaObject AndroidJavaObjectDeleteLocalRef(IntPtr jobject)
	{
		return null;
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x68A24D0", Offset = "0x68A14D0", VA = "0x68A24D0")]
	internal static AndroidJavaClass AndroidJavaClassDeleteLocalRef(IntPtr jclass)
	{
		return null;
	}

	[Token(Token = "0x600010D")]
	internal static ReturnType FromJavaArrayDeleteLocalRef<ReturnType>(IntPtr jobject)
	{
		return (ReturnType)null;
	}

	[Token(Token = "0x600010E")]
	internal static ReturnType FromJavaArray<ReturnType>(IntPtr jobject)
	{
		return (ReturnType)null;
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x68A1E50", Offset = "0x68A0E50", VA = "0x68A1E50")]
	protected IntPtr _GetRawObject()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x68A1E90", Offset = "0x68A0E90", VA = "0x68A1E90")]
	protected IntPtr _GetRawClass()
	{
		return default(IntPtr);
	}
}
