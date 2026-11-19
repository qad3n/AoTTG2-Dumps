// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DragAndDropData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200018F")]
public abstract class DragAndDropData
{
	[Token(Token = "0x1700021B")]
	public abstract object source
	{
		[Token(Token = "0x6000B3B")]
		get;
	}

	[Token(Token = "0x1700021C")]
	public virtual string[] paths
	{
		[Token(Token = "0x6000B3C")]
		[Address(RVA = "0x6C514C0", Offset = "0x6C504C0", VA = "0x6C514C0", Slot = "6")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000B3A")]
	public abstract object GetGenericData(string key);

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x6C4FE00", Offset = "0x6C4EE00", VA = "0x6C4FE00")]
	protected DragAndDropData()
	{
	}
}
