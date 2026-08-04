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

[Token(Token = "0x2000058")]
public struct LobbySearchQuery
{
	[Token(Token = "0x2000059")]
	internal struct FFIMethods
	{
		[Token(Token = "0x200005A")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result FilterMethod(IntPtr methodsPtr, string key, LobbySearchComparison comparison, LobbySearchCast cast, string value);

		[Token(Token = "0x200005B")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result SortMethod(IntPtr methodsPtr, string key, LobbySearchCast cast, string value);

		[Token(Token = "0x200005C")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result LimitMethod(IntPtr methodsPtr, uint limit);

		[Token(Token = "0x200005D")]
		[UnmanagedFunctionPointer(CallingConvention.Winapi)]
		internal delegate Result DistanceMethod(IntPtr methodsPtr, LobbySearchDistance distance);

		[Token(Token = "0x40000FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal FilterMethod Filter;

		[Token(Token = "0x40000FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		internal SortMethod Sort;

		[Token(Token = "0x40000FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal LimitMethod Limit;

		[Token(Token = "0x4000100")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal DistanceMethod Distance;
	}

	[Token(Token = "0x40000FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal IntPtr MethodsPtr;

	[Token(Token = "0x40000FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal object MethodsStructure;

	[Token(Token = "0x17000004")]
	private FFIMethods Methods
	{
		[Token(Token = "0x60000AF")]
		[Address(RVA = "0x2330790", Offset = "0x2330790", VA = "0x2330790")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x23308A0", Offset = "0x23308A0", VA = "0x23308A0")]
	public void Filter(string key, LobbySearchComparison comparison, LobbySearchCast cast, string value)
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x2330950", Offset = "0x2330950", VA = "0x2330950")]
	public void Sort(string key, LobbySearchCast cast, string value)
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x23309F0", Offset = "0x23309F0", VA = "0x23309F0")]
	public void Limit(uint limit)
	{
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x2330A80", Offset = "0x2330A80", VA = "0x2330A80")]
	public void Distance(LobbySearchDistance distance)
	{
	}
}
