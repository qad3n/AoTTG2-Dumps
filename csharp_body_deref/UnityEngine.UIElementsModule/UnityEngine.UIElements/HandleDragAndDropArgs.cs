using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000152")]
internal readonly struct HandleDragAndDropArgs
{
	[Token(Token = "0x40005E0")]
	[FieldOffset(Offset = "0x0")]
	private readonly DragAndDropArgs m_DragAndDropArgs;

	[Token(Token = "0x40005E1")]
	[FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private readonly Vector2 _003Cposition_003Ek__BackingField;

	[Token(Token = "0x6000963")]
	[Address(RVA = "0x4CF6290", Offset = "0x4CF6290", VA = "0x4CF6290")]
	internal HandleDragAndDropArgs(Vector2 position, DragAndDropArgs dragAndDropArgs)
	{
	}
}
