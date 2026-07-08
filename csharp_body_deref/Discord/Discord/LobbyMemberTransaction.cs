using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000054")]
public struct LobbyMemberTransaction
{
	[Token(Token = "0x2000055")]
	internal struct FFIMethods
	{
		[Token(Token = "0x2000056")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result SetMetadataMethod(IntPtr methodsPtr, string key, string value);

		[Token(Token = "0x2000057")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result DeleteMetadataMethod(IntPtr methodsPtr, string key);

		[Token(Token = "0x40000F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal SetMetadataMethod SetMetadata;

		[Token(Token = "0x40000FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal DeleteMetadataMethod DeleteMetadata;
	}

	[Token(Token = "0x40000F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal IntPtr MethodsPtr;

	[Token(Token = "0x40000F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal object MethodsStructure;

	[Token(Token = "0x17000003")]
	private FFIMethods Methods
	{
		[Token(Token = "0x60000A4")]
		[Address(RVA = "0x2330210", Offset = "0x2330210", VA = "0x2330210")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x2330300", Offset = "0x2330300", VA = "0x2330300")]
	public void SetMetadata(string key, string value)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x2330380", Offset = "0x2330380", VA = "0x2330380")]
	public void DeleteMetadata(string key)
	{
	}
}
