// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.AuthoringChanges
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x200000C")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIToolkitAuthoringModule" })]
internal class AuthoringChanges
{
	[Token(Token = "0x17000008")]
	public HashSet<VisualElement> addedOrMovedElements
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000009")]
	public HashSet<VisualElement> removedFromPanel
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000A")]
	public HashSet<VisualElement> styleChanged
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000B")]
	public HashSet<VisualElement> stylingContextChanged
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000C")]
	public HashSet<VisualElement> bindingContextChanged
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x307D820", Offset = "0x307BE20", VA = "0x18307D820")]
	public bool ContainsChanges()
	{
		return default(bool);
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x307D780", Offset = "0x307BD80", VA = "0x18307D780")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x307D8B0", Offset = "0x307BEB0", VA = "0x18307D8B0")]
	public AuthoringChanges()
	{
	}
}
