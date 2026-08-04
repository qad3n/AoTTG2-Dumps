// ==================== AoTTG2 cross-reference ====================
// Type: Discord.LobbyTransaction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x200004C")]
public struct LobbyTransaction
{
	[Token(Token = "0x200004D")]
	internal struct FFIMethods
	{
		[Token(Token = "0x200004E")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result SetTypeMethod(IntPtr methodsPtr, LobbyType type);

		[Token(Token = "0x200004F")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result SetOwnerMethod(IntPtr methodsPtr, long ownerId);

		[Token(Token = "0x2000050")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result SetCapacityMethod(IntPtr methodsPtr, uint capacity);

		[Token(Token = "0x2000051")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result SetMetadataMethod(IntPtr methodsPtr, string key, string value);

		[Token(Token = "0x2000052")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result DeleteMetadataMethod(IntPtr methodsPtr, string key);

		[Token(Token = "0x2000053")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result SetLockedMethod(IntPtr methodsPtr, bool locked);

		[Token(Token = "0x40000F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal SetTypeMethod SetType;

		[Token(Token = "0x40000F2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal SetOwnerMethod SetOwner;

		[Token(Token = "0x40000F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal SetCapacityMethod SetCapacity;

		[Token(Token = "0x40000F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal SetMetadataMethod SetMetadata;

		[Token(Token = "0x40000F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal DeleteMetadataMethod DeleteMetadata;

		[Token(Token = "0x40000F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		internal SetLockedMethod SetLocked;
	}

	[Token(Token = "0x40000EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal IntPtr MethodsPtr;

	[Token(Token = "0x40000F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal object MethodsStructure;

	[Token(Token = "0x17000002")]
	private FFIMethods Methods
	{
		[Token(Token = "0x6000085")]
		[Address(RVA = "0x232F5D0", Offset = "0x232F5D0", VA = "0x232F5D0")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x232F6E0", Offset = "0x232F6E0", VA = "0x232F6E0")]
	public void SetType(LobbyType type)
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x232F770", Offset = "0x232F770", VA = "0x232F770")]
	public void SetOwner(long ownerId)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x232F800", Offset = "0x232F800", VA = "0x232F800")]
	public void SetCapacity(uint capacity)
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x232F890", Offset = "0x232F890", VA = "0x232F890")]
	public void SetMetadata(string key, string value)
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x232F920", Offset = "0x232F920", VA = "0x232F920")]
	public void DeleteMetadata(string key)
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x232F9B0", Offset = "0x232F9B0", VA = "0x232F9B0")]
	public void SetLocked(bool locked)
	{
	}
}
