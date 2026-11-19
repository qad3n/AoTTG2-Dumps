// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BindingInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200003D")]
public readonly struct BindingInfo
{
	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly VisualElement _003CtargetElement_003Ek__BackingField;

	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly BindingId _003CbindingId_003Ek__BackingField;

	[Token(Token = "0x17000044")]
	public Binding binding
	{
		[Token(Token = "0x6000153")]
		[Address(RVA = "0x6A88200", Offset = "0x6A87200", VA = "0x6A88200")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x6A88210", Offset = "0x6A87210", VA = "0x6A88210")]
	private BindingInfo(VisualElement targetElement, in BindingId bindingId, Binding binding)
	{
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x6A88260", Offset = "0x6A87260", VA = "0x6A88260")]
	internal static BindingInfo FromRequest(VisualElement target, in PropertyPath targetPath, Binding binding)
	{
		return default(BindingInfo);
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x6A883B0", Offset = "0x6A873B0", VA = "0x6A883B0")]
	internal static BindingInfo FromBindingData(in DataBindingManager.BindingData bindingData)
	{
		return default(BindingInfo);
	}
}
