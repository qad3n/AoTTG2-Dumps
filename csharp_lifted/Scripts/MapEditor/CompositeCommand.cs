// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.CompositeCommand
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/CompositeCommand.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace MapEditor;

[Token(Token = "0x200013E")]
internal class CompositeCommand : BaseCommand
{
	[Token(Token = "0x4000755")]
	[FieldOffset(Offset = "0x10")]
	private List<BaseCommand> _commands;

	[Token(Token = "0x600067C")]
	[Address(RVA = "0x5B8BC60", Offset = "0x5B8AC60", VA = "0x5B8BC60")]
	public CompositeCommand(List<BaseCommand> commands)
	{
		// Lifted from source/cpp/MapEditor/CompositeCommand.c (MapEditor.CompositeCommand$$.ctor): clean
		base();
		if (commands == null) {
			commands = new List<BaseCommand>();
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this._commands = commands;
		return;
	}

	[Token(Token = "0x600067D")]
	[Address(RVA = "0x5B8BCF0", Offset = "0x5B8ACF0", VA = "0x5B8BCF0", Slot = "4")]
	public override void Execute()
	{
		// Lifted from source/cpp/MapEditor/CompositeCommand.c (MapEditor.CompositeCommand$$Execute): 3 lines keep C-only constructs
		List<object> __this_00;
		bool bVar1;
		System_Collections_Generic_List_Enumerator_T__o SStack_38;
		byte puStack_18;

		SStack_38._list = null;
		SStack_38._index = 0;
		SStack_38._version = 0;
		SStack_38._current = null;
		__this_00 = (List<object>)this._commands;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		SStack_38 = __this_00.GetEnumerator();
		puStack_18 = (byte)&SStack_38;
		while(true) {
			bVar1 = SStack_38.MoveNext();
			if (!bVar1) {
				SStack_38.Dispose();
				return;
			}
			if (SStack_38._current == null) break;
			(*(SStack_38._current).klass.vtable[4].methodPtr)(SStack_38._current,(SStack_38._current).klass.vtable[4].method);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600067E")]
	[Address(RVA = "0x5B8BE30", Offset = "0x5B8AE30", VA = "0x5B8BE30", Slot = "5")]
	public override void Unexecute()
	{
		// Lifted from source/cpp/MapEditor/CompositeCommand.c (MapEditor.CompositeCommand$$Unexecute): clean
		int index;
		List<BaseCommand> pSVar1;
		List<object> __this_00;
		BaseCommand pMVar2;

		pSVar1 = this._commands;
		if (pSVar1 != null) {
			index = pSVar1._size;
			while(true) {
				index = index + -1;
				if (index < 0) {
					return;
				}
				__this_00 = (List<object>)this._commands;
				if ((__this_00 == null) ||(pMVar2 = __this_00.get_Item(index), pMVar2 == null)) break;
				pMVar2.Unexecute();
			}
		}
		throw new NullReferenceException();
	}
}
