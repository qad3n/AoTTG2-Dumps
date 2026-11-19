// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InputForUI.EventSanitizer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.InputForUI;

[Token(Token = "0x200002D")]
internal struct EventSanitizer
{
	[Token(Token = "0x200002E")]
	private interface IEventSanitizer
	{
		[Token(Token = "0x60000EC")]
		void Reset();

		[Token(Token = "0x60000ED")]
		void BeforeProviderUpdate();

		[Token(Token = "0x60000EE")]
		void AfterProviderUpdate();

		[Token(Token = "0x60000EF")]
		void Inspect(in Event ev);
	}

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x0")]
	private IEventSanitizer[] _sanitizers;

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x69B79D0", Offset = "0x69B69D0", VA = "0x69B79D0")]
	public void Reset()
	{
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x69B7DD0", Offset = "0x69B6DD0", VA = "0x69B7DD0")]
	public void BeforeProviderUpdate()
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x69B7EF0", Offset = "0x69B6EF0", VA = "0x69B7EF0")]
	public void AfterProviderUpdate()
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x69B78C0", Offset = "0x69B68C0", VA = "0x69B78C0")]
	public void Inspect(in Event ev)
	{
	}
}
