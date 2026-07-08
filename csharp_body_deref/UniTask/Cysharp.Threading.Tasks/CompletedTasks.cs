using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000100")]
internal static class CompletedTasks
{
	[Token(Token = "0x40003F8")]
	[FieldOffset(Offset = "0x0")]
	public static readonly UniTask<AsyncUnit> AsyncUnit;

	[Token(Token = "0x40003F9")]
	[FieldOffset(Offset = "0x10")]
	public static readonly UniTask<bool> True;

	[Token(Token = "0x40003FA")]
	[FieldOffset(Offset = "0x20")]
	public static readonly UniTask<bool> False;

	[Token(Token = "0x40003FB")]
	[FieldOffset(Offset = "0x30")]
	public static readonly UniTask<int> Zero;

	[Token(Token = "0x40003FC")]
	[FieldOffset(Offset = "0x40")]
	public static readonly UniTask<int> MinusOne;

	[Token(Token = "0x40003FD")]
	[FieldOffset(Offset = "0x50")]
	public static readonly UniTask<int> One;
}
