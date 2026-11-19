// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Experimental.PointerUpLinkTagEvent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Experimental;

[Token(Token = "0x2000656")]
public class PointerUpLinkTagEvent : PointerEventBase<PointerUpLinkTagEvent>
{
	[Token(Token = "0x17000B81")]
	private string linkID
	{
		[Token(Token = "0x6002E46")]
		[Address(RVA = "0x6BFF0A0", Offset = "0x6BFE0A0", VA = "0x6BFF0A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000B82")]
	private string linkText
	{
		[Token(Token = "0x6002E47")]
		[Address(RVA = "0x6BFF0C0", Offset = "0x6BFE0C0", VA = "0x6BFF0C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002E45")]
	[Address(RVA = "0x6BFEFD0", Offset = "0x6BFDFD0", VA = "0x6BFEFD0")]
	static PointerUpLinkTagEvent()
	{
	}

	[Token(Token = "0x6002E48")]
	[Address(RVA = "0x6BFF0E0", Offset = "0x6BFE0E0", VA = "0x6BFF0E0", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6002E49")]
	[Address(RVA = "0x6BFF120", Offset = "0x6BFE120", VA = "0x6BFF120")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6002E4A")]
	[Address(RVA = "0x6BFF130", Offset = "0x6BFE130", VA = "0x6BFF130")]
	public static PointerUpLinkTagEvent GetPooled(IPointerEvent evt, string linkID, string linkText)
	{
		return null;
	}

	[Token(Token = "0x6002E4B")]
	[Address(RVA = "0x6BFF1C0", Offset = "0x6BFE1C0", VA = "0x6BFF1C0")]
	public PointerUpLinkTagEvent()
	{
	}

	[Token(Token = "0x6002E4C")]
	[Address(RVA = "0x6BFF200", Offset = "0x6BFE200", VA = "0x6BFF200", Slot = "10")]
	internal override void Dispatch(BaseVisualElementPanel panel)
	{
	}
}
