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
		[Address(RVA = "0x23306D0", Offset = "0x23306D0", VA = "0x23306D0")]
		get
		{
			return default(FFIMethods);
		}
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x23307E0", Offset = "0x23307E0", VA = "0x23307E0")]
	public void Filter(string key, LobbySearchComparison comparison, LobbySearchCast cast, string value)
	{
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x2330890", Offset = "0x2330890", VA = "0x2330890")]
	public void Sort(string key, LobbySearchCast cast, string value)
	{
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x2330930", Offset = "0x2330930", VA = "0x2330930")]
	public void Limit(uint limit)
	{
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x23309C0", Offset = "0x23309C0", VA = "0x23309C0")]
	public void Distance(LobbySearchDistance distance)
	{
	}
}
