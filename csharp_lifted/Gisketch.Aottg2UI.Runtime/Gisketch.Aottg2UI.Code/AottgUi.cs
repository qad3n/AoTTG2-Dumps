// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgUi
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200008A")]
public sealed class AottgUi
{
	[Token(Token = "0x40002DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly List<GisketchNodeDefinition> _children;

	[Token(Token = "0x40002E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly AottgActionRegistry _actions;

	[Token(Token = "0x40002E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _ownerId;

	[Token(Token = "0x17000088")]
	internal bool HasChildren
	{
		[Token(Token = "0x6000448")]
		[Address(RVA = "0x526A640", Offset = "0x5269640", VA = "0x526A640")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$get_HasChildren): clean
			List<GisketchNodeDefinition> pSVar1;

			pSVar1 = this._children;
			if (pSVar1 == null) {
				throw new NullReferenceException();
			}
			return 0 < pSVar1._size;
		}
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x5267D40", Offset = "0x5266D40", VA = "0x5267D40")]
	public GisketchNodeDefinition TextArea(string id, string placeholder, [Optional][DefaultParameterValue("textArea")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter, int maxCharacters = 0)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$TextArea): 2 lines keep C-only constructs
		GisketchNodeDefinition __this_00;
		String pSVar1;
		Enum local_48;

		__this_00 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_00 = new GisketchNodeDefinition();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.type = "TextArea";
		__this_00.id = id;
		__this_00.placeholder = placeholder;
		local_48.klass = (Enum)typeof(AottgInputType);
		local_48.monitor = (IntPtr)0xffffffffffffffff;
		pSVar1 = local_48.ToString();
		__this_00.inputType = pSVar1;
		__this_00.style = style;
		__this_00.layout = layout;
		__this_00.enter = enter;
		__this_00.maxCharacters = maxCharacters;
		this.Add(__this_00);
		return __this_00;
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x5267EA0", Offset = "0x5266EA0", VA = "0x5267EA0")]
	public GisketchNodeDefinition Skeleton(string id, GisketchLayoutDefinition layout, [Optional][DefaultParameterValue("skeleton")] string style, [Optional] string visibleKey, [Optional] GisketchMotionDefinition enter, [Optional] GisketchMotionDefinition exit)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Skeleton): clean
		String pSVar1;
		bool bVar2;
		GisketchNodeDefinition pGVar3;
		GisketchUIBindingDefinition __this_00;

		pGVar3 = new GisketchNodeDefinition();
		if (pGVar3 != null) {
			pGVar3.type = "Skeleton";
			pGVar3.id = id;
			pGVar3.style = style;
			pGVar3.layout = layout;
			__this_00 = null;
			bVar2 = String.IsNullOrEmpty(visibleKey);
			pGVar3.active = bVar2;
			bVar2 = String.IsNullOrEmpty(visibleKey);
			if (!bVar2) {
				__this_00 = new GisketchUIBindingDefinition();
				if (__this_00 == null) goto label_053680ce;
				__this_00.visible = visibleKey;
			}
			pGVar3.bind = __this_00;
			pSVar1 = "fade";
			if (enter == null) {
				enter = new GisketchMotionDefinition();
				if (enter == null) goto label_053680ce;
				enter.preset = pSVar1;
				enter.group = null;
				enter.duration = 0.12;
				enter.delay = 0.0;
				enter.stagger = 0.0;
				enter.order = 0;
			}
			pGVar3.enter = enter;
			pGVar3.exit = exit;
			if (this != null) {
				pGVar3 = this.Add(pGVar3);
				return pGVar3;
			}
		}
	label_053680ce: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x52681A0", Offset = "0x52671A0", VA = "0x52681A0")]
	public GisketchNodeDefinition Slider(string id, float value, [Optional][DefaultParameterValue(false)] bool showValue, [Optional] string actionId, [Optional][DefaultParameterValue("slider")] string style, [Optional][DefaultParameterValue(0f)] float min, [Optional][DefaultParameterValue(1f)] float max, [Optional] GisketchMotionDefinition enter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Slider): 3 lines keep C-only constructs
		GisketchNodeDefinition __this_00;
		CultureInfo provider;
		String pSVar1;
		float local_4c;
		Nullable<float> local_48;
		Nullable<float> local_40;
		AottgUi local_38;

		local_4c = value;
		__this_00 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_00 = new GisketchNodeDefinition();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.type = "Slider";
		local_38 = this;
		__this_00.id = id;
		provider = CultureInfo.InvariantCulture;
		pSVar1 = local_4c.ToString((IFormatProvider)provider);
		__this_00.value = pSVar1;
		local_40.hasValue = false;
		local_40._1_3_ = 0;
		local_40.value = 0.0;
		local_40 = new Nullable<float>(min);
		__this_00.min = local_40;
		local_48.hasValue = false;
		local_48._1_3_ = 0;
		local_48.value = 0.0;
		local_48 = new Nullable<float>(max);
		__this_00.max = local_48;
		__this_00.showValue = showValue;
		__this_00.action = actionId;
		__this_00.style = style;
		__this_00.enter = enter;
		local_38.Add(__this_00);
		return __this_00;
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x5268360", Offset = "0x5267360", VA = "0x5268360")]
	public GisketchNodeDefinition Slider(string id, float value, bool showValue, Action<GisketchActionContext> action, [Optional][DefaultParameterValue("slider")] string style, [Optional][DefaultParameterValue(0f)] float min, [Optional][DefaultParameterValue(1f)] float max, [Optional] GisketchMotionDefinition enter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Slider): clean
		AottgActionRegistry __this_00;
		String actionId;
		GisketchNodeDefinition pGVar1;

		__this_00 = this._actions;
		if (__this_00 == null) {
			actionId = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			actionId = __this_00.Register(this._ownerId, action);
		}
		pGVar1 = this.Slider(id, value, showValue, actionId, style, min, max, enter);
		return pGVar1;
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x5268400", Offset = "0x5267400", VA = "0x5268400")]
	public GisketchNodeDefinition Callout(AottgCalloutVariant variant, string text, [Optional] string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Callout): 2 lines keep C-only constructs
		AottgUi.c__DisplayClass4_0 __this_00;
		String pSVar1;
		Action<AottgUi> __this_01;
		GisketchLength __this_02;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar2;
		Enum local_40;

		__this_00 = new AottgUi.c__DisplayClass4_0();
		if (__this_00 != null) {
			__this_00.id = id;
			__this_00.text = text;
			local_40.klass = (Enum)typeof(AottgCalloutVariant);
			local_40.monitor = (IntPtr)0xffffffffffffffff;
			pSVar1 = local_40.ToString();
			__this_00.suffix = pSVar1;
			__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_AottgUi_c__DisplayClass4_0_Callout_b__0);
			pSVar1 = __this_00.id;
			__this_02 = new GisketchLength();
			if (__this_02 != null) {
				__this_02.value = 100.0;
				__this_02.unit = "percent";
				layout = AottgUi.Layout("Row", null, "Stretch", null, null, 12.0, __this_02, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				pGVar2 = this.Panel("callout", __this_01, pSVar1, layout, null);
				return pGVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x5268650", Offset = "0x5267650", VA = "0x5268650")]
	public GisketchNodeDefinition Checkbox(string id, string text, [Optional][DefaultParameterValue(false)] bool value, [Optional] Action<GisketchActionContext> action, [Optional] string icon, [Optional] string tooltip)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Checkbox): clean
		GisketchNodeDefinition pGVar1;

		if (Il2CppMethodInitialized_075429fb == false) {
			Il2CppMethodInitialized_075429fb = true;
		}
		pGVar1 = this.Toggle("Checkbox", id, text, value, action, "checkbox", icon, tooltip);
		return pGVar1;
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x5268880", Offset = "0x5267880", VA = "0x5268880")]
	public GisketchNodeDefinition Radio(string id, string text, [Optional][DefaultParameterValue(false)] bool value, [Optional] Action<GisketchActionContext> action, [Optional] string icon, [Optional] string tooltip)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Radio): clean
		GisketchNodeDefinition pGVar1;

		if (Il2CppMethodInitialized_075429fc == false) {
			Il2CppMethodInitialized_075429fc = true;
		}
		pGVar1 = this.Toggle("Radio", id, text, value, action, "radio", icon, tooltip);
		return pGVar1;
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x5268910", Offset = "0x5267910", VA = "0x5268910")]
	public GisketchNodeDefinition Switch(string id, [Optional][DefaultParameterValue(false)] bool value, [Optional] Action<GisketchActionContext> action)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Switch): clean
		GisketchNodeDefinition pGVar1;

		pGVar1 = this.Toggle("Switch", id, (String)**(ulong*)(g_data_07556758 + 0xb8), value, action, "switch", null, null);
		return pGVar1;
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x52686E0", Offset = "0x52676E0", VA = "0x52686E0")]
	private GisketchNodeDefinition Toggle(string type, string id, string text, bool value, Action<GisketchActionContext> action, string style, string icon, string tooltip)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Toggle): 2 lines keep C-only constructs
		AottgActionRegistry __this_00;
		GisketchNodeDefinition pGVar1;
		String* ppSVar2;
		String pSVar3;

		pGVar1 = new GisketchNodeDefinition();
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pGVar1.type = type;
		pGVar1.id = id;
		pGVar1.text = text;
		if (value) {
			ppSVar2 = &"true";
		}
		else {
			ppSVar2 = &"false";
		}
		pGVar1.value = *ppSVar2;
		__this_00 = this._actions;
		if (__this_00 == null) {
			pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			pSVar3 = __this_00.Register(this._ownerId, action);
		}
		pGVar1.action = pSVar3;
		pGVar1.style = style;
		pGVar1.icon = icon;
		pGVar1.tooltip = tooltip;
		pGVar1 = this.Add(pGVar1);
		return pGVar1;
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x52689B0", Offset = "0x52679B0", VA = "0x52689B0")]
	public GisketchNodeDefinition Icon(string icon, [Optional][DefaultParameterValue("icon")] string style, [Optional] string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Icon): clean
		GisketchNodeDefinition pGVar1;

		pGVar1 = new GisketchNodeDefinition();
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pGVar1.type = "Icon";
		pGVar1.id = id;
		pGVar1.icon = icon;
		pGVar1.style = style;
		pGVar1 = this.Add(pGVar1);
		return pGVar1;
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x5268A80", Offset = "0x5267A80", VA = "0x5268A80")]
	public GisketchNodeDefinition IconButton(AottgButtonVariant variant, string icon, Action<GisketchActionContext> action, [Optional] string id, [Optional] string tooltip, [Optional] GisketchMotionDefinition enter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$IconButton): clean
		AottgActionRegistry __this_00;
		GisketchNodeDefinition pGVar1;
		String pSVar2;

		pGVar1 = new GisketchNodeDefinition();
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pGVar1.type = "Button";
		pGVar1.id = id;
		pGVar1.icon = icon;
		pGVar1.hasIcon = true;
		pSVar2 = AottgUi.VariantStyle(variant);
		pGVar1.style = pSVar2;
		__this_00 = this._actions;
		if (__this_00 == null) {
			pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			pSVar2 = __this_00.Register(this._ownerId, action);
		}
		pGVar1.action = pSVar2;
		pGVar1.tooltip = tooltip;
		pGVar1.enter = enter;
		pGVar1 = this.Add(pGVar1);
		return pGVar1;
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x5268C90", Offset = "0x5267C90", VA = "0x5268C90")]
	public GisketchNodeDefinition Separator([Optional] string id, [Optional] GisketchMotionDefinition enter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Separator): clean
		GisketchNodeDefinition pGVar1;

		pGVar1 = new GisketchNodeDefinition();
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pGVar1.type = "Divider";
		pGVar1.id = id;
		pGVar1.style = "separator";
		pGVar1.enter = enter;
		pGVar1 = this.Add(pGVar1);
		return pGVar1;
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x5268D70", Offset = "0x5267D70", VA = "0x5268D70")]
	public GisketchNodeDefinition Dropdown(string id, string value, string[] options, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Dropdown): clean
		GisketchNodeDefinition pGVar1;

		pGVar1 = AottgUi.Choice("Dropdown", id, value, options, enter, maxVisibleItems);
		pGVar1 = this.Add(pGVar1);
		return pGVar1;
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x5268EE0", Offset = "0x5267EE0", VA = "0x5268EE0")]
	public GisketchNodeDefinition Dropdown(string id, string value, string[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Dropdown): clean
		AottgActionRegistry __this_00;
		GisketchNodeDefinition pGVar1;
		String pSVar2;

		pGVar1 = AottgUi.Choice("Dropdown", id, value, options, enter, maxVisibleItems);
		__this_00 = this._actions;
		if (__this_00 == null) {
			pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			pSVar2 = __this_00.Register(this._ownerId, action);
		}
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pGVar1.action = pSVar2;
		pGVar1 = this.Add(pGVar1);
		return pGVar1;
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x5268FB0", Offset = "0x5267FB0", VA = "0x5268FB0")]
	public GisketchNodeDefinition Dropdown(string id, string value, GisketchChoiceOptionDefinition[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Dropdown): clean
		AottgActionRegistry __this_00;
		GisketchNodeDefinition pGVar1;
		String pSVar2;

		pGVar1 = AottgUi.Choice("Dropdown", id, value, options, enter, maxVisibleItems);
		__this_00 = this._actions;
		if (__this_00 == null) {
			pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			pSVar2 = __this_00.Register(this._ownerId, action);
		}
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pGVar1.action = pSVar2;
		pGVar1 = this.Add(pGVar1);
		return pGVar1;
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x5269180", Offset = "0x5268180", VA = "0x5269180")]
	public GisketchNodeDefinition Select(string id, string value, string[] options, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Select): clean
		GisketchNodeDefinition pGVar1;

		pGVar1 = AottgUi.Choice("Select", id, value, options, enter, maxVisibleItems);
		pGVar1 = this.Add(pGVar1);
		return pGVar1;
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x52691F0", Offset = "0x52681F0", VA = "0x52691F0")]
	public GisketchNodeDefinition Select(string id, string value, string[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Select): clean
		AottgActionRegistry __this_00;
		GisketchNodeDefinition pGVar1;
		String pSVar2;

		pGVar1 = AottgUi.Choice("Select", id, value, options, enter, maxVisibleItems);
		__this_00 = this._actions;
		if (__this_00 == null) {
			pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			pSVar2 = __this_00.Register(this._ownerId, action);
		}
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pGVar1.action = pSVar2;
		pGVar1 = this.Add(pGVar1);
		return pGVar1;
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x52692C0", Offset = "0x52682C0", VA = "0x52692C0")]
	public GisketchNodeDefinition Select(string id, string value, GisketchChoiceOptionDefinition[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, int maxVisibleItems = 8)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Select): clean
		AottgActionRegistry __this_00;
		GisketchNodeDefinition pGVar1;
		String pSVar2;

		pGVar1 = AottgUi.Choice("Select", id, value, options, enter, maxVisibleItems);
		__this_00 = this._actions;
		if (__this_00 == null) {
			pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			pSVar2 = __this_00.Register(this._ownerId, action);
		}
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pGVar1.action = pSVar2;
		pGVar1 = this.Add(pGVar1);
		return pGVar1;
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x5268DE0", Offset = "0x5267DE0", VA = "0x5268DE0")]
	private static GisketchNodeDefinition Choice(string type, string id, string value, string[] options, GisketchMotionDefinition enter, int maxVisibleItems)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Choice): clean
		GisketchNodeDefinition __this;
		String pSVar1;

		__this = new GisketchNodeDefinition();
		if (__this != null) {
			__this.type = type;
			__this.id = id;
			__this.value = value;
			__this.options = options;
			__this.maxVisibleItems = maxVisibleItems;
			if (type != null) {
				pSVar1 = type.ToLowerInvariant();
				__this.style = pSVar1;
				__this.enter = enter;
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x5269080", Offset = "0x5268080", VA = "0x5269080")]
	private static GisketchNodeDefinition Choice(string type, string id, string value, GisketchChoiceOptionDefinition[] options, GisketchMotionDefinition enter, int maxVisibleItems)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Choice): clean
		GisketchNodeDefinition __this;
		String pSVar1;

		__this = new GisketchNodeDefinition();
		if (__this != null) {
			__this.type = type;
			__this.id = id;
			__this.value = value;
			__this.choiceOptions = options;
			__this.maxVisibleItems = maxVisibleItems;
			if (type != null) {
				pSVar1 = type.ToLowerInvariant();
				__this.style = pSVar1;
				__this.enter = enter;
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x5269390", Offset = "0x5268390", VA = "0x5269390")]
	public GisketchNodeDefinition[] BuildDetached(Action<AottgUi> build, [Optional] string ownerId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$BuildDetached): clean
		AottgActionRegistry actions;
		List<GisketchNodeDefinition> __this_00;
		AottgUi __this_01;
		GisketchNodeDefinition[] pGVar1;

		if (ownerId == null) {
			ownerId = this._ownerId;
		}
		actions = this._actions;
		__this_01 = new AottgUi(ownerId, actions);
		if (build != null) {
			(*(code)build.invoke_impl)(build.method_code,__this_01,build.method);
		}
		if (__this_01 != null) {
			__this_00 = __this_01._children;
			if (__this_00 != null) {
				pGVar1 = (GisketchNodeDefinition[])__this_00.ToArray();
				return pGVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x5269450", Offset = "0x5268450", VA = "0x5269450")]
	public GisketchNodeDefinition FormInput(string id, string label, string placeholder, [Optional][DefaultParameterValue(0)] AottgInputType type, [Optional][DefaultParameterValue("inputField")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter, [Optional] Action<GisketchActionContext> change, [Optional][DefaultParameterValue(0.2f)] float debounceSeconds, [Optional][DefaultParameterValue(0)] int maxCharacters, [Optional] Action<GisketchActionContext> commit, [Optional] string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$FormInput): clean
		GisketchNodeDefinition pGVar1;

		pGVar1 = this.InputField(id, placeholder, type, style, layout, enter, change, debounceSeconds, maxCharacters, commit);
		if (pGVar1 != null) {
			if (key != null) {
				id = key;
			}
			pGVar1.formKey = id;
			pGVar1.formLabel = label;
		}
		return pGVar1;
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x5269790", Offset = "0x5268790", VA = "0x5269790")]
	public GisketchNodeDefinition FormTextArea(string id, string label, string placeholder, [Optional][DefaultParameterValue("textArea")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter, [Optional][DefaultParameterValue(0)] int maxCharacters, [Optional] string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$FormTextArea): clean
		GisketchNodeDefinition pGVar1;

		pGVar1 = this.TextArea(id, placeholder, style, layout, enter, maxCharacters);
		if (pGVar1 != null) {
			if (key != null) {
				id = key;
			}
			pGVar1.formKey = id;
			pGVar1.formLabel = label;
		}
		return pGVar1;
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x5269810", Offset = "0x5268810", VA = "0x5269810")]
	public GisketchNodeDefinition FormSelect(string id, string label, string value, string[] options, [Optional] Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, [Optional][DefaultParameterValue(8)] int maxVisibleItems, [Optional] string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$FormSelect): clean
		GisketchNodeDefinition node;

		if (action == null) {
			node = AottgUi.Choice("Select", id, value, options, enter, maxVisibleItems);
			this.Add(node);
		}
		else {
			node = this.Select(id, value, options, action, enter, maxVisibleItems);
		}
		if (node != null) {
			if (key != null) {
				id = key;
			}
			node.formKey = id;
			node.formLabel = label;
		}
		return node;
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x5269900", Offset = "0x5268900", VA = "0x5269900")]
	public GisketchNodeDefinition FormSelect(string id, string label, string value, GisketchChoiceOptionDefinition[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, [Optional][DefaultParameterValue(8)] int maxVisibleItems, [Optional] string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$FormSelect): clean
		GisketchNodeDefinition pGVar1;

		pGVar1 = this.Select(id, value, options, action, enter, maxVisibleItems);
		if (pGVar1 != null) {
			if (key != null) {
				id = key;
			}
			pGVar1.formKey = id;
			pGVar1.formLabel = label;
		}
		return pGVar1;
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x5269980", Offset = "0x5268980", VA = "0x5269980")]
	public GisketchNodeDefinition FormDropdown(string id, string label, string value, string[] options, [Optional] Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, [Optional][DefaultParameterValue(8)] int maxVisibleItems, [Optional] string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$FormDropdown): clean
		GisketchNodeDefinition node;

		if (action == null) {
			node = AottgUi.Choice("Dropdown", id, value, options, enter, maxVisibleItems);
			this.Add(node);
		}
		else {
			node = this.Dropdown(id, value, options, action, enter, maxVisibleItems);
		}
		if (node != null) {
			if (key != null) {
				id = key;
			}
			node.formKey = id;
			node.formLabel = label;
		}
		return node;
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x5269A70", Offset = "0x5268A70", VA = "0x5269A70")]
	public GisketchNodeDefinition FormDropdown(string id, string label, string value, GisketchChoiceOptionDefinition[] options, Action<GisketchActionContext> action, [Optional] GisketchMotionDefinition enter, [Optional][DefaultParameterValue(8)] int maxVisibleItems, [Optional] string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$FormDropdown): clean
		GisketchNodeDefinition pGVar1;

		pGVar1 = this.Dropdown(id, value, options, action, enter, maxVisibleItems);
		if (pGVar1 != null) {
			if (key != null) {
				id = key;
			}
			pGVar1.formKey = id;
			pGVar1.formLabel = label;
		}
		return pGVar1;
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x5269AF0", Offset = "0x5268AF0", VA = "0x5269AF0")]
	public GisketchNodeDefinition FormDraft(string key, string value, [Optional] string label, [Optional] string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$FormDraft): 1 lines keep C-only constructs
		bool bVar1;
		GisketchNodeDefinition __this_00;

		__this_00 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_00 = new GisketchNodeDefinition();
		if (__this_00 != null) {
			__this_00.type = "FormDraft";
			bVar1 = String.IsNullOrEmpty(id);
			if (bVar1) {
				id = String.Concat(key, "-form-draft");
			}
			__this_00.id = id;
			if (value == null) {
				value = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			__this_00.value = value;
			__this_00.active = false;
			if (this != null) {
				this.Add(__this_00);
				__this_00.formKey = key;
				__this_00.formLabel = label;
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x5269740", Offset = "0x5268740", VA = "0x5269740")]
	private static GisketchNodeDefinition TrackForm(GisketchNodeDefinition node, string key, string label)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$TrackForm): clean
		if (node != null) {
			node.formKey = key;
			node.formLabel = label;
		}
		return node;
	}

	[Token(Token = "0x600043C")]
	[Address(RVA = "0x5269C40", Offset = "0x5268C40", VA = "0x5269C40")]
	public GisketchNodeDefinition Image(string sprite, [Optional][DefaultParameterValue("image")] string style, [Optional] string id, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Image): clean
		GisketchNodeDefinition pGVar1;

		pGVar1 = new GisketchNodeDefinition();
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pGVar1.type = "Image";
		pGVar1.id = id;
		pGVar1.sprite = sprite;
		pGVar1.style = style;
		pGVar1.layout = layout;
		pGVar1.enter = enter;
		pGVar1 = this.Add(pGVar1);
		return pGVar1;
	}

	[Token(Token = "0x600043D")]
	[Address(RVA = "0x5269D40", Offset = "0x5268D40", VA = "0x5269D40")]
	public GisketchNodeDefinition SpriteButton(string sprite, string label, string actionId, [Optional] string id, [Optional][DefaultParameterValue("spriteButton")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$SpriteButton): clean
		GisketchNodeDefinition pGVar1;

		pGVar1 = new GisketchNodeDefinition();
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pGVar1.type = "SpriteButton";
		pGVar1.id = id;
		pGVar1.text = label;
		pGVar1.sprite = sprite;
		pGVar1.style = style;
		pGVar1.action = actionId;
		pGVar1.tooltip = label;
		pGVar1.layout = layout;
		pGVar1.enter = enter;
		pGVar1 = this.Add(pGVar1);
		return pGVar1;
	}

	[Token(Token = "0x600043E")]
	[Address(RVA = "0x5269EA0", Offset = "0x5268EA0", VA = "0x5269EA0")]
	public GisketchNodeDefinition SpriteButton(string sprite, string label, Action<GisketchActionContext> action, [Optional] string id, [Optional][DefaultParameterValue("spriteButton")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$SpriteButton): clean
		AottgActionRegistry __this_00;
		String actionId;
		GisketchNodeDefinition pGVar1;

		__this_00 = this._actions;
		if (__this_00 == null) {
			actionId = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			actionId = __this_00.Register(this._ownerId, action);
		}
		pGVar1 = this.SpriteButton(sprite, label, actionId, id, style, layout, enter);
		return pGVar1;
	}

	[Token(Token = "0x600043F")]
	[Address(RVA = "0x5269F30", Offset = "0x5268F30", VA = "0x5269F30")]
	public GisketchNodeDefinition TextKey(string key, [Optional][DefaultParameterValue("text")] string style, [Optional] string id, [Optional] string bindText, [Optional] GisketchMotionDefinition enter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$TextKey): clean
		String text;
		GisketchNodeDefinition pGVar1;

		text = Aottg2GisketchLocale.Text(key);
		pGVar1 = this.Text(text, style, id, bindText, enter);
		pGVar1 = Aottg2GisketchLocale.Key(pGVar1, key);
		return pGVar1;
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x526A120", Offset = "0x5269120", VA = "0x526A120")]
	public GisketchNodeDefinition ButtonKey(AottgButtonVariant variant, string key, string actionId, [Optional] string id, [Optional] string tooltip, [Optional] GisketchMotionDefinition enter, [Optional] string icon)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$ButtonKey): clean
		String text;
		GisketchNodeDefinition pGVar1;

		text = Aottg2GisketchLocale.Text(key);
		pGVar1 = this.Button(variant, text, actionId, id, tooltip, enter, icon);
		pGVar1 = Aottg2GisketchLocale.Key(pGVar1, key);
		return pGVar1;
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x526A1D0", Offset = "0x52691D0", VA = "0x526A1D0")]
	public GisketchNodeDefinition ButtonKey(AottgButtonVariant variant, string key, Action<GisketchActionContext> action, [Optional] string id, [Optional] string tooltip, [Optional] GisketchMotionDefinition enter, [Optional] string icon)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$ButtonKey): clean
		AottgActionRegistry __this_00;
		String text;
		String actionId;
		GisketchNodeDefinition pGVar1;

		text = Aottg2GisketchLocale.Text(key);
		__this_00 = this._actions;
		if (__this_00 == null) {
			actionId = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			actionId = __this_00.Register(this._ownerId, action);
		}
		pGVar1 = this.Button(variant, text, actionId, id, tooltip, enter, icon);
		pGVar1 = Aottg2GisketchLocale.Key(pGVar1, key);
		return pGVar1;
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x526A2C0", Offset = "0x52692C0", VA = "0x526A2C0")]
	public GisketchNodeDefinition InputFieldKey(string id, string placeholderKey, [Optional][DefaultParameterValue(0)] AottgInputType type, [Optional][DefaultParameterValue("inputField")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter, [Optional] Action<GisketchActionContext> change, [Optional][DefaultParameterValue(0.2f)] float debounceSeconds, [Optional][DefaultParameterValue(0)] int maxCharacters, [Optional] Action<GisketchActionContext> commit)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$InputFieldKey): clean
		String placeholder;
		GisketchNodeDefinition pGVar1;

		placeholder = Aottg2GisketchLocale.Text(placeholderKey);
		pGVar1 = this.InputField(id, placeholder, type, style, layout, enter, change, debounceSeconds, maxCharacters, commit);
		pGVar1 = Aottg2GisketchLocale.Key(pGVar1, placeholderKey);
		return pGVar1;
	}

	[Token(Token = "0x6000443")]
	[Address(RVA = "0x526A3A0", Offset = "0x52693A0", VA = "0x526A3A0")]
	public GisketchNodeDefinition CalloutKey(AottgCalloutVariant variant, string key, [Optional] string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$CalloutKey): clean
		uint uVar1;
		GisketchNodeDefinition pGVar2;
		bool bVar3;
		String text;
		GisketchNodeDefinition pGVar4;
		GisketchNodeDefinition[] pGVar5;
		ulong uVar6;

		text = Aottg2GisketchLocale.Text(key);
		pGVar4 = this.Callout(variant, text, id);
		if ((pGVar4 == null) ||(pGVar5 = pGVar4.children, pGVar5 == null )) {
			return pGVar4;
		}
		uVar6 = 0;
		do {
			uVar1 = (uint)pGVar5.Length;
			if ((long)(int)uVar1 <= (long)uVar6) {
				return pGVar4;
			}
			if (uVar1 <= uVar6) {
	label_0536a4ae: ;
				throw new IndexOutOfRangeException();
			}
			if ((pGVar5[uVar6] != null) &&(bVar3 = (pGVar5[uVar6].type == "Text"))) {
				pGVar5 = pGVar4.children;
				if (pGVar5 == null) break;
				if ((uint)pGVar5.Length <= uVar6) goto label_0536a4ae;
				pGVar2 = pGVar5[uVar6];
				if (pGVar2 == null) break;
				pGVar2.textKey = key;
			}
			uVar6 = uVar6 + 1;
			pGVar5 = pGVar4.children;
		} while (pGVar5 != null);
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000444")]
	[Address(RVA = "0x526A4C0", Offset = "0x52694C0", VA = "0x526A4C0")]
	public static GisketchSearchDefinition SearchKey(string titleKey, [Optional] string keywords, [Optional][DefaultParameterValue(false)] bool hidden, [Optional] string icon, [Optional] string kind, [Optional] string sectionId, [Optional] string sectionTitle, bool autoAddKeywords = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$SearchKey): clean
		String title;
		GisketchSearchDefinition pGVar1;

		title = Aottg2GisketchLocale.Text(titleKey);
		pGVar1 = AottgUi.Search(title, keywords, hidden, icon, kind, sectionId, sectionTitle, autoAddKeywords);
		return pGVar1;
	}

	[Token(Token = "0x6000445")]
	[Address(RVA = "0x5267A30", Offset = "0x5266A30", VA = "0x5267A30")]
	public GisketchNodeDefinition SearchPalette([Optional][DefaultParameterValue("search-palette")] string id, [Optional][DefaultParameterValue("Search current screen")] string placeholder, [Optional] string scopeScreenId, [Optional][DefaultParameterValue(false)] bool showFullPath, [Optional] string[] extraScopeScreenIds)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$SearchPalette): clean
		GisketchNodeDefinition pGVar1;

		pGVar1 = new GisketchNodeDefinition();
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pGVar1.type = "SearchPalette";
		pGVar1.id = id;
		pGVar1.placeholder = placeholder;
		pGVar1.style = "searchPalette";
		pGVar1.searchScopeScreenId = scopeScreenId;
		pGVar1.searchScopeScreenIds = extraScopeScreenIds;
		pGVar1.searchShowFullPath = showFullPath;
		pGVar1 = this.Add(pGVar1);
		return pGVar1;
	}

	[Token(Token = "0x6000446")]
	[Address(RVA = "0x526A550", Offset = "0x5269550", VA = "0x526A550")]
	public static GisketchSearchDefinition Search([Optional] string title, [Optional] string keywords, [Optional][DefaultParameterValue(false)] bool hidden, [Optional] string icon, [Optional] string kind, [Optional] string sectionId, [Optional] string sectionTitle, bool autoAddKeywords = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Search): clean
		GisketchSearchDefinition __this;

		__this = new GisketchSearchDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.title = title;
		__this.keywords = keywords;
		__this.hidden = hidden;
		__this.icon = icon;
		__this.kind = kind;
		__this.sectionId = sectionId;
		__this.sectionTitle = sectionTitle;
		__this.autoAddKeywords = autoAddKeywords;
		return __this;
	}

	[Token(Token = "0x6000447")]
	[Address(RVA = "0x5267190", Offset = "0x5266190", VA = "0x5267190")]
	internal AottgUi(string ownerId, AottgActionRegistry actions)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$.ctor): clean
		List<GisketchNodeDefinition> __this_00;

		__this_00 = new List<GisketchNodeDefinition>();
		this._children = __this_00;
		base();
		this._ownerId = ownerId;
		this._actions = actions;
		return;
	}

	[Token(Token = "0x6000449")]
	[Address(RVA = "0x5267240", Offset = "0x5266240", VA = "0x5267240")]
	internal GisketchNodeDefinition[] ToArray()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$ToArray): clean
		List<GisketchNodeDefinition> __this_00;
		GisketchNodeDefinition[] pGVar1;

		__this_00 = this._children;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pGVar1 = (GisketchNodeDefinition[])__this_00.ToArray();
		return pGVar1;
	}

	[Token(Token = "0x600044A")]
	[Address(RVA = "0x5266D10", Offset = "0x5265D10", VA = "0x5266D10")]
	public GisketchNodeDefinition Add(GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Add): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<GisketchNodeDefinition> __this_00;
		GisketchNodeDefinition[] pGVar3;

		if (node == null) {
			return null;
		}
		__this_00 = this._children;
		if (__this_00 != null) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pGVar3 = __this_00._items;
			if (pGVar3 != null) {
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pGVar3.Length) {
					__this_00._size = uVar2 + 1;
					pGVar3[(int)uVar2] = node;
					return node;
				}
				__this_00.AddWithResize((object)node);
				return node;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x526A680", Offset = "0x5269680", VA = "0x526A680")]
	public void Component(AottgComponent component)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Component): clean
		if (component == null) {
			return;
		}
		component.Build(this);
		return;
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x52665E0", Offset = "0x52655E0", VA = "0x52665E0")]
	public GisketchNodeDefinition Panel(string style, [Optional] Action<AottgUi> build, [Optional] string id, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Panel): clean
		AottgActionRegistry actions;
		List<GisketchNodeDefinition> __this_00;
		AottgUi __this_01;
		GisketchNodeDefinition pGVar1;
		GisketchNodeDefinition[] pGVar2;
		String ownerId;

		ownerId = id;
		if (id == null) {
			ownerId = this._ownerId;
		}
		actions = this._actions;
		__this_01 = new AottgUi(ownerId, actions);
		if (build != null) {
			(*(code)build.invoke_impl)(build.method_code,__this_01,build.method);
		}
		pGVar1 = new GisketchNodeDefinition();
		if (pGVar1 != null) {
			pGVar1.type = "Panel";
			pGVar1.id = id;
			pGVar1.style = style;
			pGVar1.layout = layout;
			pGVar1.enter = enter;
			if (__this_01 != null) {
				__this_00 = __this_01._children;
				if (__this_00 != null) {
					pGVar2 = (GisketchNodeDefinition[])__this_00.ToArray();
					pGVar1.children = pGVar2;
					pGVar1 = this.Add(pGVar1);
					return pGVar1;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x5269FC0", Offset = "0x5268FC0", VA = "0x5269FC0")]
	public GisketchNodeDefinition Text(string text, [Optional][DefaultParameterValue("text")] string style, [Optional] string id, [Optional] string bindText, [Optional] GisketchMotionDefinition enter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Text): clean
		bool bVar1;
		GisketchNodeDefinition pGVar2;
		GisketchUIBindingDefinition __this_00;

		pGVar2 = new GisketchNodeDefinition();
		if (pGVar2 != null) {
			pGVar2.type = "Text";
			pGVar2.id = id;
			pGVar2.text = text;
			pGVar2.style = style;
			__this_00 = null;
			bVar1 = String.IsNullOrEmpty(bindText);
			if (!bVar1) {
				__this_00 = new GisketchUIBindingDefinition();
				if (__this_00 == null) goto label_0536a110;
				__this_00.text = bindText;
			}
			pGVar2.bind = __this_00;
			pGVar2.enter = enter;
			if (this != null) {
				pGVar2 = this.Add(pGVar2);
				return pGVar2;
			}
		}
	label_0536a110: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x5265610", Offset = "0x5264610", VA = "0x5265610")]
	public GisketchNodeDefinition Button(AottgButtonVariant variant, string text, string actionId, [Optional] string id, [Optional] string tooltip, [Optional] GisketchMotionDefinition enter, [Optional] string icon)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Button): clean
		bool bVar1;
		GisketchNodeDefinition pGVar2;
		String pSVar3;

		pGVar2 = new GisketchNodeDefinition();
		if (pGVar2 == null) {
			throw new NullReferenceException();
		}
		pGVar2.type = "Button";
		pGVar2.id = id;
		pGVar2.text = text;
		pGVar2.icon = icon;
		bVar1 = String.IsNullOrEmpty(icon);
		pGVar2.hasIcon = !bVar1;
		pSVar3 = AottgUi.VariantStyle(variant);
		pGVar2.style = pSVar3;
		pGVar2.action = actionId;
		pGVar2.tooltip = tooltip;
		pGVar2.enter = enter;
		pGVar2 = this.Add(pGVar2);
		return pGVar2;
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x5265860", Offset = "0x5264860", VA = "0x5265860")]
	public GisketchNodeDefinition Button(AottgButtonVariant variant, string text, Action<GisketchActionContext> action, [Optional] string id, [Optional] string tooltip, [Optional] GisketchMotionDefinition enter, [Optional] string icon)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Button): clean
		AottgActionRegistry __this_00;
		String actionId;
		GisketchNodeDefinition pGVar1;

		__this_00 = this._actions;
		if (__this_00 == null) {
			actionId = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			actionId = __this_00.Register(this._ownerId, action);
		}
		pGVar1 = this.Button(variant, text, actionId, id, tooltip, enter, icon);
		return pGVar1;
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x52694F0", Offset = "0x52684F0", VA = "0x52694F0")]
	public GisketchNodeDefinition InputField(string id, string placeholder, [Optional][DefaultParameterValue(0)] AottgInputType type, [Optional][DefaultParameterValue("inputField")] string style, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchMotionDefinition enter, [Optional] Action<GisketchActionContext> change, [Optional][DefaultParameterValue(0.2f)] float debounceSeconds, [Optional][DefaultParameterValue(0)] int maxCharacters, [Optional] Action<GisketchActionContext> commit)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$InputField): 4 lines keep C-only constructs
		AottgActionRegistry pGVar1;
		AottgUi __this_00;
		GisketchNodeDefinition __this_01;
		String pSVar2;
		Enum local_50;
		AottgUi local_38;

		local_38 = this;
		__this_01 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_01 = new GisketchNodeDefinition();
		if (__this_01 != null) {
			__this_01.type = "InputField";
			__this_01.id = id;
			__this_01.placeholder = placeholder;
			local_50.klass = (Enum)typeof(AottgInputType);
			local_50.monitor = (IntPtr)0xffffffffffffffff;
			pSVar2 = local_50.ToString();
			__this_01.inputType = pSVar2;
			__this_01.style = style;
			__this_01.layout = layout;
			__this_01.enter = enter;
			__this_00 = local_38;
			__this_01.maxCharacters = maxCharacters;
			if ((change == null) ||(pGVar1 = local_38._actions, pGVar1 == null)) {
				pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				pSVar2 = pGVar1.Register(local_38._ownerId, change);
			}
			__this_01.action = pSVar2;
			if ((commit == null) ||(pGVar1 = __this_00._actions, pGVar1 == null)) {
				pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				pSVar2 = pGVar1.Register(__this_00._ownerId, commit);
			}
			__this_01.commitAction = pSVar2;
			if (change == null) {
				__this_01.debounceSeconds = (Nullable<float>)0x0;
			}
			else {
				local_50.klass = null;
				local_50 = new Nullable<float>(debounceSeconds);
				__this_01.debounceSeconds = (Nullable<float>)local_50.klass;
			}
			if (__this_00 != null) {
				__this_00.Add(__this_01);
				return __this_01;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x526A6B0", Offset = "0x52696B0", VA = "0x526A6B0")]
	public GisketchNodeDefinition ScrollView(string style, [Optional] Action<AottgUi> build, [Optional] string id, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchLayoutDefinition contentLayout, [Optional] GisketchMotionDefinition enter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$ScrollView): clean
		AottgActionRegistry actions;
		List<GisketchNodeDefinition> __this_00;
		AottgUi __this_01;
		GisketchNodeDefinition pGVar1;
		GisketchNodeDefinition[] pGVar2;
		String ownerId;

		ownerId = id;
		if (id == null) {
			ownerId = this._ownerId;
		}
		actions = this._actions;
		__this_01 = new AottgUi(ownerId, actions);
		if (build != null) {
			(*(code)build.invoke_impl)(build.method_code,__this_01,build.method);
		}
		pGVar1 = new GisketchNodeDefinition();
		if (pGVar1 != null) {
			pGVar1.type = "ScrollView";
			pGVar1.id = id;
			pGVar1.style = style;
			pGVar1.layout = layout;
			pGVar1.contentLayout = contentLayout;
			pGVar1.enter = enter;
			if (__this_01 != null) {
				__this_00 = __this_01._children;
				if (__this_00 != null) {
					pGVar2 = (GisketchNodeDefinition[])__this_00.ToArray();
					pGVar1.children = pGVar2;
					pGVar1 = this.Add(pGVar1);
					return pGVar1;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x526A880", Offset = "0x5269880", VA = "0x526A880")]
	public GisketchNodeDefinition ScaleBox(string style, float referenceWidth, float referenceHeight, [Optional] Action<AottgUi> build, [Optional] string id, [Optional] GisketchLayoutDefinition layout, [Optional] GisketchLayoutDefinition contentLayout, [Optional] GisketchMotionDefinition enter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$ScaleBox): clean
		AottgActionRegistry actions;
		List<GisketchNodeDefinition> __this_00;
		AottgUi __this_01;
		GisketchNodeDefinition pGVar1;
		GisketchNodeDefinition[] pGVar2;
		String ownerId;

		ownerId = id;
		if (id == null) {
			ownerId = this._ownerId;
		}
		actions = this._actions;
		__this_01 = new AottgUi(ownerId, actions);
		if (build != null) {
			(*(code)build.invoke_impl)(build.method_code,__this_01,build.method);
		}
		pGVar1 = new GisketchNodeDefinition();
		if (pGVar1 != null) {
			pGVar1.type = "ScaleBox";
			pGVar1.id = id;
			pGVar1.style = style;
			pGVar1.referenceWidth = referenceWidth;
			pGVar1.referenceHeight = referenceHeight;
			pGVar1.layout = layout;
			pGVar1.contentLayout = contentLayout;
			pGVar1.enter = enter;
			if (__this_01 != null) {
				__this_00 = __this_01._children;
				if (__this_00 != null) {
					pGVar2 = (GisketchNodeDefinition[])__this_00.ToArray();
					pGVar1.children = pGVar2;
					pGVar1 = this.Add(pGVar1);
					return pGVar1;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x526AA70", Offset = "0x5269A70", VA = "0x526AA70")]
	public GisketchNodeDefinition Stepper(string style, params AottgStepperStep[] steps)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Stepper): clean
		uint uVar1;
		AottgStepperStep __this_00;
		GisketchStepperStepDefinition[] pGVar2;
		ulong uVar3;
		MethodInfo method_00;
		GisketchNodeDefinition pGVar4;
		GisketchLayoutDefinition pGVar5;
		long lVar6;
		ulong uVar7;

		if (steps == null) {
			pGVar2 = null;
		}
		else {
			uVar1 = (uint)steps.Length;
			method_00 = (MethodInfo)(ulong)uVar1;
			pGVar2 = (GisketchStepperStepDefinition[])new GisketchStepperStepDefinition[uVar1];
			if (0 < (int)steps.Length) {
				if (pGVar2 == null) {
					if (steps[0] != null) {
						(steps[0]).ToDefinition();
					}
					goto label_0536acc1;
				}
				uVar3 = steps.Length & 0xffffffff;
				lVar6 = 0x20;
				uVar7 = 0;
				do {
					if (uVar3 <= uVar7) {
	label_0536acad: ;
						throw new IndexOutOfRangeException();
					}
					__this_00 = steps[uVar7];
					if (__this_00 == null) {
						method_00 = null;
						uVar1 = (uint)pGVar2.Length;
					}
					else {
						if (__this_00 == null) goto label_0536acc1;
						method_00 = (MethodInfo)__this_00.ToDefinition() ;
						uVar1 = (uint)pGVar2.Length;
					}
					if (uVar1 <= uVar7) goto label_0536acad;
					pGVar2[uVar7] = (GisketchStepperStepDefinition)method_00;
					uVar7 = uVar7 + 1;
					uVar1 = (uint)steps.Length;
					uVar3 = (ulong)uVar1;
					lVar6 = lVar6 + 8;
				} while ((long)uVar7 < (long)(int)uVar1);
			}
		}
		pGVar4 = new GisketchNodeDefinition();
		if (pGVar4 != null) {
			pGVar4.type = "Stepper";
			pGVar4.style = style;
			pGVar5 = AottgUi.Layout("Column", null, "Stretch", null, null, 12.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			pGVar4.layout = pGVar5;
			pGVar4.steps = pGVar2;
			pGVar4 = this.Add(pGVar4);
			return pGVar4;
		}
	label_0536acc1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x52663C0", Offset = "0x52653C0", VA = "0x52663C0")]
	public static GisketchLayoutDefinition Layout([Optional][DefaultParameterValue("Column")] string direction, [Optional] string justify, [Optional] string alignItems, [Optional] string alignSelf, [Optional] string wrap, [Optional][DefaultParameterValue(0f)] float gap, [Optional] GisketchLength width, [Optional] GisketchLength height, [Optional] GisketchLength minWidth, [Optional] GisketchLength minHeight, [Optional] GisketchLength maxWidth, [Optional] GisketchLength maxHeight, float padding = 0f, float paddingX = 0f, float paddingY = 0f, float paddingLeft = 0f, float paddingRight = 0f, float paddingTop = 0f, float paddingBottom = 0f, float offsetX = 0f, float offsetY = 0f, float grow = 0f, float shrink = 1f)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Layout): clean
		GisketchLayoutDefinition __this;

		__this = new GisketchLayoutDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.direction = direction;
		__this.justify = justify;
		__this.alignItems = alignItems;
		__this.alignSelf = alignSelf;
		__this.wrap = wrap;
		__this.gap = gap;
		__this.width = width;
		__this.height = height;
		__this.minWidth = minWidth;
		__this.minHeight = minHeight;
		__this.maxWidth = maxWidth;
		__this.maxHeight = maxHeight;
		__this.padding = padding;
		__this.paddingX = paddingX;
		__this.paddingY = paddingY;
		__this.paddingLeft = paddingLeft;
		__this.paddingRight = paddingRight;
		__this.paddingTop = paddingTop;
		__this.paddingBottom = paddingBottom;
		__this.offsetX = offsetX;
		__this.offsetY = offsetY;
		__this.grow = grow;
		__this.shrink = shrink;
		return __this;
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x52680E0", Offset = "0x52670E0", VA = "0x52680E0")]
	public static GisketchMotionDefinition Motion(string preset, [Optional] string group, float duration = 0f, float delay = 0f, float stagger = 0f, int order = 0)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Motion): clean
		GisketchMotionDefinition __this;

		__this = new GisketchMotionDefinition();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.preset = preset;
		__this.group = group;
		__this.duration = duration;
		__this.delay = delay;
		__this.stagger = stagger;
		__this.order = order;
		return __this;
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x5266F00", Offset = "0x5265F00", VA = "0x5266F00")]
	public static GisketchLength Points(float value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Points): clean
		GisketchLength __this;

		__this = new GisketchLength();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.value = value;
		__this.unit = "point";
		return __this;
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x5266330", Offset = "0x5265330", VA = "0x5266330")]
	public static GisketchLength Percent(float value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$Percent): clean
		GisketchLength __this;

		__this = new GisketchLength();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.value = value;
		__this.unit = "percent";
		return __this;
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x5268BF0", Offset = "0x5267BF0", VA = "0x5268BF0")]
	private static string VariantStyle(AottgButtonVariant variant)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c (Gisketch.Aottg2UI.Code.AottgUi$$VariantStyle): clean
		if (variant - 1U < 7) {
			return new string[] { "buttonSecondary", "buttonWorkshop", "buttonQuiet", "buttonHeaderTab", "buttonPlain", "buttonDanger", "buttonNegative" }[(int)(variant - 1U)];
		}
		return "buttonPrimary";
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgUi.c.

	// Gisketch.Aottg2UI.Code.AottgUi.<>c__DisplayClass4_0$$.ctor: clean
	private void c__DisplayClass4_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Code.AottgUi.<>c__DisplayClass4_0$$<Callout>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass4_0__Callout_b__0(AottgUi callout)
	{
		bool bVar1;
		String pSVar2;
		String pSVar3;
		GisketchLength __this_00;
		MethodInfo method_00;
		GisketchLayoutDefinition layout;
		String id;

		pSVar3 = null;
		pSVar2 = String.Concat("calloutBorder", this.suffix);
		bVar1 = String.IsNullOrEmpty(this.id);
		if (!bVar1) {
			pSVar3 = String.Concat(this.id, "-border");
		}
		__this_00 = new GisketchLength();
		if (__this_00 != null) {
			__this_00.value = 7.0;
			__this_00.unit = "point";
			method_00 = new GisketchLength();
			if (method_00 != null) {
				((GisketchLength)&method_00.invoker_method).value = 100.0;
				method_00.name = (char *)"percent";
				layout = AottgUi.Layout("Column", null, null, null, null, 0.0, __this_00, (GisketchLength)method_00, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				if (callout != null) {
					id = null;
					callout.Panel(pSVar2, null, pSVar3, layout, null);
					pSVar2 = this.text;
					bVar1 = String.IsNullOrEmpty(this.id);
					pSVar3 = "calloutText";
					if (!bVar1) {
						id = String.Concat(this.id, "-text");
					}
					callout.Text(pSVar2, pSVar3, id, null, null);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}
}
