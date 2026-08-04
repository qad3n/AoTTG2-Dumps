// ==================== AoTTG2 cross-reference ====================
// Type: Discord.LobbyMemberTransaction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x23302D0", Offset = "0x23302D0", VA = "0x23302D0")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x60000A5")]
	[Address(RVA = "0x23303C0", Offset = "0x23303C0", VA = "0x23303C0")]
	public void SetMetadata(string key, string value)
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x2330440", Offset = "0x2330440", VA = "0x2330440")]
	public void DeleteMetadata(string key)
	{
	}
}
