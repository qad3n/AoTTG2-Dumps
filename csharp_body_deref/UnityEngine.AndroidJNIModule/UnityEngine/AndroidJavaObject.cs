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
	[Address(RVA = "0x4A759E0", Offset = "0x4A759E0", VA = "0x4A759E0")]
	public AndroidJavaObject(string className, params object[] args)
	{
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x4A752D0", Offset = "0x4A752D0", VA = "0x4A752D0")]
	public AndroidJavaObject(IntPtr jobject)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x4A75260", Offset = "0x4A75260", VA = "0x4A75260", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x4A75C00", Offset = "0x4A75C00", VA = "0x4A75C00")]
	public void Call(string methodName, params object[] args)
	{
	}

	[Token(Token = "0x60000E5")]
	public FieldType GetStatic<FieldType>(string fieldName)
	{
		return (FieldType)null;
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x4A75570", Offset = "0x4A75570", VA = "0x4A75570")]
	public IntPtr GetRawObject()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x4A75D20", Offset = "0x4A75D20", VA = "0x4A75D20")]
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
	[Address(RVA = "0x4A75D60", Offset = "0x4A75D60", VA = "0x4A75D60")]
	protected void DebugPrint(string msg)
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x4A75A20", Offset = "0x4A75A20", VA = "0x4A75A20")]
	private void _AndroidJavaObject(string className, params object[] args)
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x4A75DE0", Offset = "0x4A75DE0", VA = "0x4A75DE0")]
	private void _AndroidJavaObject(IntPtr constructorID, params object[] args)
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x4A75A10", Offset = "0x4A75A10", VA = "0x4A75A10")]
	internal AndroidJavaObject()
	{
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x4A76070", Offset = "0x4A76070", VA = "0x4A76070", Slot = "1")]
	~AndroidJavaObject()
	{
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x4A76100", Offset = "0x4A76100", VA = "0x4A76100", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x4A75C80", Offset = "0x4A75C80", VA = "0x4A75C80")]
	protected void _Call(string methodName, params object[] args)
	{
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x4A761C0", Offset = "0x4A761C0", VA = "0x4A761C0")]
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
	[Address(RVA = "0x4A75470", Offset = "0x4A75470", VA = "0x4A75470")]
	internal static AndroidJavaObject AndroidJavaObjectDeleteLocalRef(IntPtr jobject)
	{
		return null;
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x4A763D0", Offset = "0x4A763D0", VA = "0x4A763D0")]
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
	[Address(RVA = "0x4A75D00", Offset = "0x4A75D00", VA = "0x4A75D00")]
	protected IntPtr _GetRawObject()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x4A75D40", Offset = "0x4A75D40", VA = "0x4A75D40")]
	protected IntPtr _GetRawClass()
	{
		return default(IntPtr);
	}
}
