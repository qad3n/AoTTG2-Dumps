// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangelogMarkdownRenderer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogMarkdownRenderer.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001EB")]
public sealed class AottgChangelogMarkdownRenderer : AottgComponent
{
	[Token(Token = "0x4000A55")]
	private const float SpacerHeight = 12f;

	[Token(Token = "0x4000A56")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _markdown;

	[Token(Token = "0x4000A57")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _id;

	[Token(Token = "0x4000A58")]
	[FieldOffset(Offset = "0x20")]
	private readonly int _maxLines;

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x5D78410", Offset = "0x5D77410", VA = "0x5D78410")]
	public AottgChangelogMarkdownRenderer(string markdown, string id = "changelog-markdown", int maxLines = 0)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogMarkdownRenderer.c (Gisketch.Aottg2UI.Game.AottgChangelogMarkdownRenderer$$.ctor): clean
		bool bVar1;

		base();
		this._markdown = markdown;
		bVar1 = String.IsNullOrEmpty(id);
		if (bVar1) {
			id = "changelog-markdown";
		}
		this._id = id;
		this._maxLines = maxLines;
		return;
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x5D78490", Offset = "0x5D77490", VA = "0x5D78490", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogMarkdownRenderer.c (Gisketch.Aottg2UI.Game.AottgChangelogMarkdownRenderer$$Build): 12 lines keep C-only constructs
		int iVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		int iVar4;
		int iVar5;
		object obj;
		VirtualInvokeData pVVar6;
		AottgChangelogMarkdownBlock block;
		String pSVar7;
		ulong uVar8;
		long lVar9;
		int iVar10;

		pSVar7 = this._markdown;
		obj = (object)AottgChangelogMarkdown.Parse(pSVar7);
		if (obj != null) {
			pIVar2 = obj.klass;
			uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
			if (uVar8 != 0) {
				pIVar3 = (pIVar2._1).interfaceOffsets;
				lVar9 = 0;
				do {
					if (*(IReadOnlyCollection<AottgChangelogMarkdownBlock>*)((long)&pIVar3.interfaceType + lVar9) == typeof(IReadOnlyCollection<AottgChangelogMarkdownBlock>)) {
						pVVar6 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar9);
						goto label_05e785b1;
					}
					lVar9 = lVar9 + 0x10;
				} while (uVar8 * 0x10 != lVar9);
			}
			pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IReadOnlyCollection<AottgChangelogMarkdownBlock>), 0);
	label_05e785b1: ;
			iVar4 = (*pVVar6.methodPtr)(obj,pVVar6.method);
			if (iVar4 != 0) {
				iVar4 = 0;
				iVar10 = 0;
				do {
					pIVar2 = obj.klass;
					uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
					if (uVar8 != 0) {
						pIVar3 = (pIVar2._1).interfaceOffsets;
						lVar9 = 0;
						do {
							if (*(IReadOnlyCollection<AottgChangelogMarkdownBlock>*)((long)&pIVar3.interfaceType + lVar9) == typeof(IReadOnlyCollection<AottgChangelogMarkdownBlock>)) {
								pVVar6 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar9);
								goto label_05e78673;
							}
							lVar9 = lVar9 + 0x10;
						} while (uVar8 * 0x10 != lVar9);
					}
					pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IReadOnlyCollection<AottgChangelogMarkdownBlock>), 0);
	label_05e78673: ;
					iVar5 = (*pVVar6.methodPtr)(obj,pVVar6.method);
					if (iVar5 <= iVar4) {
						return;
					}
					iVar1 = this._maxLines;
					if ((0 < iVar1) && (iVar1 <= iVar10)) goto label_05e78745;
					pIVar2 = obj.klass;
					uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
					if (uVar8 != 0) {
						pIVar3 = (pIVar2._1).interfaceOffsets;
						lVar9 = 0;
						do {
							if (*(IReadOnlyList<AottgChangelogMarkdownBlock>*)((long)&pIVar3.interfaceType + lVar9) == typeof(IReadOnlyList<AottgChangelogMarkdownBlock>)) {
								pVVar6 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar9);
								goto label_05e785dd;
							}
							lVar9 = lVar9 + 0x10;
						} while (uVar8 * 0x10 != lVar9);
					}
					pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IReadOnlyList<AottgChangelogMarkdownBlock>), 0);
	label_05e785dd: ;
					block = (AottgChangelogMarkdownBlock)(*pVVar6.methodPtr)(obj,iVar4,pVVar6.method);
					iVar1 = this._maxLines;
					iVar5 = iVar1 - iVar10;
					if (iVar1 < 1) {
						iVar5 = 0;
					}
					iVar5 = this.BuildBlock(ui, block, iVar4, iVar5);
					iVar10 = iVar10 + iVar5;
					iVar4 = iVar4 + 1;
				} while(true);
			}
			pSVar7 = String.Concat(this._id, "-empty");
			if (ui != null) {
				ui.TextKey("Changelog.NothingToPreview", "stateMetaText", pSVar7, null, null);
				return;
			}
		}
	label_05e7879b: ;
		throw new NullReferenceException();
	label_05e78745: ;
		pSVar7 = String.Concat(this._id, "-truncated");
		if (ui != null) {
			ui.Text("...", "text", pSVar7, null, null);
			return;
		}
		goto label_05e7879b;
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x5D787A0", Offset = "0x5D777A0", VA = "0x5D787A0")]
	private int BuildBlock(AottgUi ui, AottgChangelogMarkdownBlock block, int index, int remainingLines)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgChangelogMarkdownRenderer.c (Gisketch.Aottg2UI.Game.AottgChangelogMarkdownRenderer$$BuildBlock): 2 lines keep C-only constructs
		object pIVar1;
		uint uVar4;
		int val1;
		int iVar5;
		String pSVar6;
		String pSVar7;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;
		String* ppSVar9;
		MethodInfo pMVar11;
		uint local_44;
		String local_40;
		int local_34;

		local_34 = index;
		pSVar7 = this._id;
		pSVar6 = local_34.ToString();
		pMVar11 = (MethodInfo *)"-";
		local_40 = String.Concat(pSVar7, "-", pSVar6);
		if (block == null) {
	label_05e78c65: ;
			throw new NullReferenceException();
		}
		iVar5 = block._Type_k__BackingField;
		if (iVar5 == 3) {
			iVar5 = 0;
			width = AottgUi.Percent(100.0);
			height = AottgUi.Points(12.0);
			layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (ui == null) goto label_05e78c65;
			ui.Panel(null, null, local_40, layout, null);
		}
		else if (iVar5 == 2) {
			pIVar1 = (object)block._Items_k__BackingField;
			if (remainingLines < 1) {
				if (pIVar1 == null) goto label_05e78c65;
				iVar5 = pIVar1.get_Item();
			}
			else {
				if (pIVar1 == null) goto label_05e78c65;
				val1 = pIVar1.get_Item();
				iVar5 = Math.Min(val1, remainingLines);
			}
			if (0 < iVar5) {
				local_44 = 0;
				do {
					uVar4 = local_44;
					pIVar1 = (object)block._Items_k__BackingField;
					if (pIVar1 == null) goto label_05e78c65;
					pSVar7 = pIVar1.get_Item(uVar4);
					pSVar7 = AottgChangelogMarkdown.RenderInline(pSVar7);
					pSVar7 = String.Concat("- ", pSVar7);
					pSVar6 = local_44.ToString();
					pSVar6 = String.Concat(local_40, "-item-", pSVar6);
					if (ui == null) goto label_05e78c65;
					ui.Text(pSVar7, "text", pSVar6, null, null);
					local_44 = local_44 + 1;
				} while ((int)local_44 < iVar5);
			}
		}
		else {
			if (iVar5 == 0) {
				pSVar7 = block._Text_k__BackingField;
				pSVar7 = AottgChangelogMarkdown.RenderInline(pSVar7);
				if (ui == null) goto label_05e78c65;
				ppSVar9 = &"changelogMarkdownHeader";
			}
			else {
				pSVar7 = block._Text_k__BackingField;
				pSVar7 = AottgChangelogMarkdown.RenderInline(pSVar7);
				if (ui == null) goto label_05e78c65;
				ppSVar9 = &"text";
			}
			ui.Text(pSVar7, *ppSVar9, local_40, null, null);
			iVar5 = 1;
		}
		return iVar5;
	}
}
