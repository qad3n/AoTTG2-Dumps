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

[Token(Token = "0x200004A")]
public struct LobbyTransaction
{
	[Token(Token = "0x200004B")]
	internal struct FFIMethods
	{
		[Token(Token = "0x200004C")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result SetTypeMethod(IntPtr methodsPtr, LobbyType type);

		[Token(Token = "0x200004D")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result SetOwnerMethod(IntPtr methodsPtr, long ownerId);

		[Token(Token = "0x200004E")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result SetCapacityMethod(IntPtr methodsPtr, uint capacity);

		[Token(Token = "0x200004F")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result SetMetadataMethod(IntPtr methodsPtr, string key, string value);

		[Token(Token = "0x2000050")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result DeleteMetadataMethod(IntPtr methodsPtr, string key);

		[Token(Token = "0x2000051")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result SetLockedMethod(IntPtr methodsPtr, bool locked);

		[Token(Token = "0x40000EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal SetTypeMethod SetType;

		[Token(Token = "0x40000ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal SetOwnerMethod SetOwner;

		[Token(Token = "0x40000EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal SetCapacityMethod SetCapacity;

		[Token(Token = "0x40000EF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal SetMetadataMethod SetMetadata;

		[Token(Token = "0x40000F0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal DeleteMetadataMethod DeleteMetadata;

		[Token(Token = "0x40000F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		internal SetLockedMethod SetLocked;
	}

	[Token(Token = "0x40000EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal IntPtr MethodsPtr;

	[Token(Token = "0x40000EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal object MethodsStructure;

	[Token(Token = "0x17000002")]
	private FFIMethods Methods
	{
		[Token(Token = "0x6000083")]
		[Address(RVA = "0x538240", Offset = "0x536840", VA = "0x180538240")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x5381A0", Offset = "0x5367A0", VA = "0x1805381A0")]
	public void SetType(LobbyType type)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x538100", Offset = "0x536700", VA = "0x180538100")]
	public void SetOwner(long ownerId)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x537F10", Offset = "0x536510", VA = "0x180537F10")]
	public void SetCapacity(uint capacity)
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x538050", Offset = "0x536650", VA = "0x180538050")]
	public void SetMetadata(string key, string value)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x537E70", Offset = "0x536470", VA = "0x180537E70")]
	public void DeleteMetadata(string key)
	{
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x537FB0", Offset = "0x5365B0", VA = "0x180537FB0")]
	public void SetLocked(bool locked)
	{
	}
}
