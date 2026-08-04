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

[Token(Token = "0x200000B")]
public class AndroidJavaObject : IDisposable
{
	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x0")]
	private static bool enableDebugPrints;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x10")]
	internal GlobalJavaObjectRef m_jobject;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x18")]
	internal GlobalJavaObjectRef m_jclass;

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x4D9D200", Offset = "0x4D9D200", VA = "0x4D9D200")]
	public AndroidJavaObject(string className, params object[] args)
	{
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x4D9CAF0", Offset = "0x4D9CAF0", VA = "0x4D9CAF0")]
	public AndroidJavaObject(IntPtr jobject)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x4D9CA80", Offset = "0x4D9CA80", VA = "0x4D9CA80", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x4D9D420", Offset = "0x4D9D420", VA = "0x4D9D420")]
	public void Call(string methodName, params object[] args)
	{
	}

	[Token(Token = "0x60000E5")]
	public FieldType GetStatic<FieldType>(string fieldName)
	{
		return (FieldType)null;
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x4D9CD90", Offset = "0x4D9CD90", VA = "0x4D9CD90")]
	public IntPtr GetRawObject()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x4D9D540", Offset = "0x4D9D540", VA = "0x4D9D540")]
	public IntPtr GetRawClass()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000E8")]
	public ReturnType Call<ReturnType>(string methodName, params object[] args)
	{
		return (ReturnType)null;
	}

	[Token(Token = "0x60000E9")]
	public ReturnType CallStatic<ReturnType>(string methodName, params object[] args)
	{
		return (ReturnType)null;
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x4D9D580", Offset = "0x4D9D580", VA = "0x4D9D580")]
	protected void DebugPrint(string msg)
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x4D9D240", Offset = "0x4D9D240", VA = "0x4D9D240")]
	private void _AndroidJavaObject(string className, params object[] args)
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x4D9D600", Offset = "0x4D9D600", VA = "0x4D9D600")]
	private void _AndroidJavaObject(IntPtr constructorID, params object[] args)
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x4D9D230", Offset = "0x4D9D230", VA = "0x4D9D230")]
	internal AndroidJavaObject()
	{
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x4D9D890", Offset = "0x4D9D890", VA = "0x4D9D890", Slot = "1")]
	~AndroidJavaObject()
	{
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x4D9D920", Offset = "0x4D9D920", VA = "0x4D9D920", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x4D9D4A0", Offset = "0x4D9D4A0", VA = "0x4D9D4A0")]
	protected void _Call(string methodName, params object[] args)
	{
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x4D9D9E0", Offset = "0x4D9D9E0", VA = "0x4D9D9E0")]
	protected void _Call(IntPtr methodID, params object[] args)
	{
	}

	[Token(Token = "0x60000F2")]
	protected ReturnType _Call<ReturnType>(string methodName, params object[] args)
	{
		return (ReturnType)null;
	}

	[Token(Token = "0x60000F3")]
	protected ReturnType _Call<ReturnType>(IntPtr methodID, params object[] args)
	{
		return (ReturnType)null;
	}

	[Token(Token = "0x60000F4")]
	protected ReturnType _CallStatic<ReturnType>(string methodName, params object[] args)
	{
		return (ReturnType)null;
	}

	[Token(Token = "0x60000F5")]
	protected ReturnType _CallStatic<ReturnType>(IntPtr methodID, params object[] args)
	{
		return (ReturnType)null;
	}

	[Token(Token = "0x60000F6")]
	protected FieldType _GetStatic<FieldType>(string fieldName)
	{
		return (FieldType)null;
	}

	[Token(Token = "0x60000F7")]
	protected FieldType _GetStatic<FieldType>(IntPtr fieldID)
	{
		return (FieldType)null;
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x4D9CC90", Offset = "0x4D9CC90", VA = "0x4D9CC90")]
	internal static AndroidJavaObject AndroidJavaObjectDeleteLocalRef(IntPtr jobject)
	{
		return null;
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x4D9DBF0", Offset = "0x4D9DBF0", VA = "0x4D9DBF0")]
	internal static AndroidJavaClass AndroidJavaClassDeleteLocalRef(IntPtr jclass)
	{
		return null;
	}

	[Token(Token = "0x60000FA")]
	internal static ReturnType FromJavaArrayDeleteLocalRef<ReturnType>(IntPtr jobject)
	{
		return (ReturnType)null;
	}

	[Token(Token = "0x60000FB")]
	internal static ReturnType FromJavaArray<ReturnType>(IntPtr jobject)
	{
		return (ReturnType)null;
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x4D9D520", Offset = "0x4D9D520", VA = "0x4D9D520")]
	protected IntPtr _GetRawObject()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x4D9D560", Offset = "0x4D9D560", VA = "0x4D9D560")]
	protected IntPtr _GetRawClass()
	{
		return default(IntPtr);
	}
}
