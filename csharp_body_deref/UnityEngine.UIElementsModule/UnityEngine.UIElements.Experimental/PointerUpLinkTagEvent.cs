// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Experimental.PointerUpLinkTagEvent
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x2CF3F20", Offset = "0x2CF2520", VA = "0x182CF3F20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000B82")]
	private string linkText
	{
		[Token(Token = "0x6002E47")]
		[Address(RVA = "0x3182970", Offset = "0x3180F70", VA = "0x183182970")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002E45")]
	[Address(RVA = "0x3207910", Offset = "0x3205F10", VA = "0x183207910")]
	static PointerUpLinkTagEvent()
	{
	}

	[Token(Token = "0x6002E48")]
	[Address(RVA = "0x32078C0", Offset = "0x3205EC0", VA = "0x1832078C0", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6002E49")]
	[Address(RVA = "0x31ED2A0", Offset = "0x31EB8A0", VA = "0x1831ED2A0")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6002E4A")]
	[Address(RVA = "0x3207830", Offset = "0x3205E30", VA = "0x183207830")]
	public static PointerUpLinkTagEvent GetPooled(IPointerEvent evt, string linkID, string linkText)
	{
		return null;
	}

	[Token(Token = "0x6002E4B")]
	[Address(RVA = "0x32079F0", Offset = "0x3205FF0", VA = "0x1832079F0")]
	public PointerUpLinkTagEvent()
	{
	}

	[Token(Token = "0x6002E4C")]
	[Address(RVA = "0x31ED1B0", Offset = "0x31EB7B0", VA = "0x1831ED1B0", Slot = "10")]
	internal override void Dispatch(BaseVisualElementPanel panel)
	{
	}
}
