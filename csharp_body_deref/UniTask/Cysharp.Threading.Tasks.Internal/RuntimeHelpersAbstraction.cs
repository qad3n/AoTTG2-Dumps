using System;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x2000232")]
internal static class RuntimeHelpersAbstraction
{
	[Token(Token = "0x2000233")]
	private static class WellKnownNoReferenceContainsType<T>
	{
		[Token(Token = "0x400066B")]
		[FieldOffset(Offset = "0x0")]
		public static readonly bool IsWellKnownType;

		[Token(Token = "0x6000CCE")]
		static WellKnownNoReferenceContainsType()
		{
		}
	}

	[Token(Token = "0x6000CCC")]
	public static bool IsWellKnownNoReferenceContainsType<T>()
	{
		return default(bool);
	}

	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x46F7EC0", Offset = "0x46F7EC0", VA = "0x46F7EC0")]
	private static bool WellKnownNoReferenceContainsTypeInitialize(Type t)
	{
		return default(bool);
	}
}
