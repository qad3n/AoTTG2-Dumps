// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Accessibility.AccessibilityNodeData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Accessibility;

[Token(Token = "0x200000A")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeType(UnityEngine.Bindings.CodegenOptions.Custom, "MonoAccessibilityNodeData")]
[UnityEngine.Bindings.NativeHeader("Modules/Accessibility/Bindings/AccessibilityNodeData.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Accessibility/Native/AccessibilityNodeData.h")]
internal struct AccessibilityNodeData
{
	[Token(Token = "0x17000009")]
	public int[] childIds
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public string label
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x1D69900", Offset = "0x1D67F00", VA = "0x181D69900")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public string value
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public string hint
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public Rect frame
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x19377C0", Offset = "0x1935DC0", VA = "0x1819377C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public int nodeId
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x1826560", Offset = "0x1824B60", VA = "0x181826560")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public int parentId
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x16EFA10", Offset = "0x16EE010", VA = "0x1816EFA10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public AccessibilityRole role
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0xF1D640", Offset = "0xF1BC40", VA = "0x180F1D640")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public AccessibilityState state
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0xF1DA30", Offset = "0xF1C030", VA = "0x180F1DA30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public bool isActive
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x19EDC20", Offset = "0x19EC220", VA = "0x1819EDC20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public bool allowsDirectInteraction
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x2E7E500", Offset = "0x2E7CB00", VA = "0x182E7E500")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public bool implementsInvoked
	{
		[Token(Token = "0x600003C")]
		[Address(RVA = "0xDA7C80", Offset = "0xDA6280", VA = "0x180DA7C80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public bool implementsScrolled
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x2E7E520", Offset = "0x2E7CB20", VA = "0x182E7E520")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public bool implementsDismissed
	{
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x2E7E510", Offset = "0x2E7CB10", VA = "0x182E7E510")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x2E7E460", Offset = "0x2E7CA60", VA = "0x182E7E460")]
	public AccessibilityNodeData()
	{
	}
}
