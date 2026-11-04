// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.BindingInfo
// Update status: NEW in this game update
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
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private readonly BindingId _003CbindingId_003Ek__BackingField;

	[Token(Token = "0x17000044")]
	public Binding binding
	{
		[Token(Token = "0x6000153")]
		[Address(RVA = "0x187BC20", Offset = "0x187A220", VA = "0x18187BC20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x3085A90", Offset = "0x3084090", VA = "0x183085A90")]
	private BindingInfo(VisualElement targetElement, in BindingId bindingId, Binding binding)
	{
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x3085870", Offset = "0x3083E70", VA = "0x183085870")]
	internal static BindingInfo FromRequest(VisualElement target, in PropertyPath targetPath, Binding binding)
	{
		return default(BindingInfo);
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x3085750", Offset = "0x3083D50", VA = "0x183085750")]
	internal static BindingInfo FromBindingData(in DataBindingManager.BindingData bindingData)
	{
		return default(BindingInfo);
	}
}
