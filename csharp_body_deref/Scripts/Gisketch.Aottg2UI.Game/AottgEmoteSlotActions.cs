using System;
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200011B")]
internal static class AottgEmoteSlotActions
{
	[Token(Token = "0x40006AB")]
	[FieldOffset(Offset = "0x0")]
	public static Action<GisketchActionContext, string> SaveSticker;
}
