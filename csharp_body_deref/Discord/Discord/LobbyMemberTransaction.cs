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

[Token(Token = "0x2000052")]
public struct LobbyMemberTransaction
{
	[Token(Token = "0x2000053")]
	internal struct FFIMethods
	{
		[Token(Token = "0x2000054")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result SetMetadataMethod(IntPtr methodsPtr, string key, string value);

		[Token(Token = "0x2000055")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result DeleteMetadataMethod(IntPtr methodsPtr, string key);

		[Token(Token = "0x40000F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal SetMetadataMethod SetMetadata;

		[Token(Token = "0x40000F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal DeleteMetadataMethod DeleteMetadata;
	}

	[Token(Token = "0x40000F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal IntPtr MethodsPtr;

	[Token(Token = "0x40000F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal object MethodsStructure;

	[Token(Token = "0x17000003")]
	private FFIMethods Methods
	{
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x537750", Offset = "0x535D50", VA = "0x180537750")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x5376A0", Offset = "0x535CA0", VA = "0x1805376A0")]
	public void SetMetadata(string key, string value)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x537600", Offset = "0x535C00", VA = "0x180537600")]
	public void DeleteMetadata(string key)
	{
	}
}
