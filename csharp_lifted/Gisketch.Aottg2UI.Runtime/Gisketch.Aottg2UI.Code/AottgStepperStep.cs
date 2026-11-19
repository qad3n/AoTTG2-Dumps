// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgStepperStep
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgStepperStep.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000087")]
public sealed class AottgStepperStep
{
	[Token(Token = "0x17000084")]
	public string Id
	{
		[Token(Token = "0x6000418")]
		[Address(RVA = "0x5267BC0", Offset = "0x5266BC0", VA = "0x5267BC0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgStepperStep.c (Gisketch.Aottg2UI.Code.AottgStepperStep$$get_Id): clean
			return this._Id_k__BackingField;
		}
	}

	[Token(Token = "0x17000085")]
	public string Title
	{
		[Token(Token = "0x6000419")]
		[Address(RVA = "0x5267BD0", Offset = "0x5266BD0", VA = "0x5267BD0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgStepperStep.c (Gisketch.Aottg2UI.Code.AottgStepperStep$$get_Title): clean
			return this._Title_k__BackingField;
		}
	}

	[Token(Token = "0x17000086")]
	public string Text
	{
		[Token(Token = "0x600041A")]
		[Address(RVA = "0x5267BE0", Offset = "0x5266BE0", VA = "0x5267BE0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgStepperStep.c (Gisketch.Aottg2UI.Code.AottgStepperStep$$get_Text): clean
			return this._Text_k__BackingField;
		}
	}

	[Token(Token = "0x17000087")]
	public GisketchNodeDefinition[] Children
	{
		[Token(Token = "0x600041B")]
		[Address(RVA = "0x5267BF0", Offset = "0x5266BF0", VA = "0x5267BF0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgStepperStep.c (Gisketch.Aottg2UI.Code.AottgStepperStep$$get_Children): clean
			return this._Children_k__BackingField;
		}
		[Token(Token = "0x600041C")]
		[Address(RVA = "0x5267C00", Offset = "0x5266C00", VA = "0x5267C00")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgStepperStep.c (Gisketch.Aottg2UI.Code.AottgStepperStep$$set_Children): clean
			this._Children_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x5267B60", Offset = "0x5266B60", VA = "0x5267B60")]
	public AottgStepperStep(string id, string title, [Optional] string text)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgStepperStep.c (Gisketch.Aottg2UI.Code.AottgStepperStep$$.ctor): clean
		base();
		this._Id_k__BackingField = id;
		this._Title_k__BackingField = title;
		this._Text_k__BackingField = text;
		return;
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x5267C10", Offset = "0x5266C10", VA = "0x5267C10")]
	internal GisketchStepperStepDefinition ToDefinition()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgStepperStep.c (Gisketch.Aottg2UI.Code.AottgStepperStep$$ToDefinition): 2 lines keep C-only constructs
		bool bVar1;
		GisketchStepperStepDefinition __this_00;

		if (Il2CppMethodInitialized_075429f6 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchStepperStepDefinition)) ;
			Il2CppMethodInitialized_075429f6 = true;
		}
		__this_00 = new GisketchStepperStepDefinition();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.id = this._Id_k__BackingField;
		__this_00.title = this._Title_k__BackingField;
		bVar1 = String.IsNullOrEmpty(this._Text_k__BackingField);
		__this_00.text = (&this._Title_k__BackingField)[!bVar1];
		__this_00.children = this._Children_k__BackingField;
		return __this_00;
	}
}
