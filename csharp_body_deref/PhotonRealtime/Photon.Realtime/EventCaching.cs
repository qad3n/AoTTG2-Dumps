using System;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000032")]
public enum EventCaching : byte
{
	[Token(Token = "0x4000192")]
	DoNotCache = 0,
	[Token(Token = "0x4000193")]
	[Obsolete]
	MergeCache = 1,
	[Token(Token = "0x4000194")]
	[Obsolete]
	ReplaceCache = 2,
	[Token(Token = "0x4000195")]
	[Obsolete]
	RemoveCache = 3,
	[Token(Token = "0x4000196")]
	AddToRoomCache = 4,
	[Token(Token = "0x4000197")]
	AddToRoomCacheGlobal = 5,
	[Token(Token = "0x4000198")]
	RemoveFromRoomCache = 6,
	[Token(Token = "0x4000199")]
	RemoveFromRoomCacheForActorsLeft = 7,
	[Token(Token = "0x400019A")]
	SliceIncreaseIndex = 10,
	[Token(Token = "0x400019B")]
	SliceSetIndex = 11,
	[Token(Token = "0x400019C")]
	SlicePurgeIndex = 12,
	[Token(Token = "0x400019D")]
	SlicePurgeUpToIndex = 13
}
