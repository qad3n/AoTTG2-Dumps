// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ConverterGroups
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200002A")]
public static class ConverterGroups
{
	[Token(Token = "0x200002B")]
	internal struct Unsafe
	{
		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x3097400", Offset = "0x3095A00", VA = "0x183097400")]
		public static void LazyRegisterGlobal(Type source, Type destination, Func<Delegate> converterDelegate)
		{
		}
	}

	[Token(Token = "0x4000065")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConverterGroup s_GlobalConverters;

	[Token(Token = "0x4000066")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<string, ConverterGroup> s_BindingConverterGroups;

	[Token(Token = "0x60000D3")]
	public static bool TryConvert<TSource, TDestination>(ref TSource source, out TDestination destination)
	{
		return default(bool);
	}
}
