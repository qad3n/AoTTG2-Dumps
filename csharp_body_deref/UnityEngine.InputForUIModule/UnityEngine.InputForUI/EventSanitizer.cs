// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InputForUI.EventSanitizer
// Update status: NEW in this game update
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
	[Address(RVA = "0x2FBB9A0", Offset = "0x2FB9FA0", VA = "0x182FBB9A0")]
	public void Reset()
	{
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x2FBB760", Offset = "0x2FB9D60", VA = "0x182FBB760")]
	public void BeforeProviderUpdate()
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x2FBB640", Offset = "0x2FB9C40", VA = "0x182FBB640")]
	public void AfterProviderUpdate()
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x2FBB880", Offset = "0x2FB9E80", VA = "0x182FBB880")]
	public void Inspect(in Event ev)
	{
	}
}
