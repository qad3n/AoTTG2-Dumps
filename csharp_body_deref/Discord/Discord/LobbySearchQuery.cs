// ==================== AoTTG2 cross-reference ====================
// Type: Discord.LobbySearchQuery
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000056")]
public struct LobbySearchQuery
{
	[Token(Token = "0x2000057")]
	internal struct FFIMethods
	{
		[Token(Token = "0x2000058")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result FilterMethod(IntPtr methodsPtr, string key, LobbySearchComparison comparison, LobbySearchCast cast, string value);

		[Token(Token = "0x2000059")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result SortMethod(IntPtr methodsPtr, string key, LobbySearchCast cast, string value);

		[Token(Token = "0x200005A")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result LimitMethod(IntPtr methodsPtr, uint limit);

		[Token(Token = "0x200005B")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result DistanceMethod(IntPtr methodsPtr, LobbySearchDistance distance);

		[Token(Token = "0x40000F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal FilterMethod Filter;

		[Token(Token = "0x40000F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal SortMethod Sort;

		[Token(Token = "0x40000FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal LimitMethod Limit;

		[Token(Token = "0x40000FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal DistanceMethod Distance;
	}

	[Token(Token = "0x40000F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal IntPtr MethodsPtr;

	[Token(Token = "0x40000F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal object MethodsStructure;

	[Token(Token = "0x17000004")]
	private FFIMethods Methods
	{
		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x537D60", Offset = "0x536360", VA = "0x180537D60")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x537B60", Offset = "0x536160", VA = "0x180537B60")]
	public void Filter(string key, LobbySearchComparison comparison, LobbySearchCast cast, string value)
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x537CB0", Offset = "0x5362B0", VA = "0x180537CB0")]
	public void Sort(string key, LobbySearchCast cast, string value)
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x537C10", Offset = "0x536210", VA = "0x180537C10")]
	public void Limit(uint limit)
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x537AC0", Offset = "0x5360C0", VA = "0x180537AC0")]
	public void Distance(LobbySearchDistance distance)
	{
	}
}
