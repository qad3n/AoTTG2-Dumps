// ==================== AoTTG2 cross-reference ====================
// Type: UI.ChatDisplayLineComposer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ChatDisplayLineComposer.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using GameManagers;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200081B")]
internal static class ChatDisplayLineComposer
{
	[Token(Token = "0x6004D69")]
	[Address(RVA = "0x5C08650", Offset = "0x5C07650", VA = "0x5C08650")]
	public static string ComposePlayerLine(ChatManager.ChatDisplayLine line, out ChatDisplayNameRange nameRange, float extraNameReservePixels = 0f)
	{
		// Lifted from source/cpp/UI/ChatDisplayLineComposer.c (UI.ChatDisplayLineComposer$$ComposePlayerLine): 1 lines keep C-only constructs
		uint uVar1;
		String pSVar2;
		String pSVar3;
		String pSVar4;
		String pSVar5;
		ChatDisplayNameRange UVar6;
		CultureInfo provider;
		String[] values;
		String pSVar7;
		float local_44;
		String local_40;
		ChatDisplayNameRange local_38;

		local_44 = extraNameReservePixels;
		local_38 = &nameRange.fields;
		if (line.TimeText == null) {
			pSVar7 = (String)**(long*)(g_data_07556758 + 0xb8);
		}
		else {
			pSVar7 = line.TimeText;
		}
		if (line.IdText == null) {
			pSVar2 = (String)**(long*)(g_data_07556758 + 0xb8);
		}
		else {
			pSVar2 = line.IdText;
		}
		if (line.SenderName == null) {
			uVar1 = ((typeof(GisketchArabicText))._2). cctor_finished_or_no_cctor;
			pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			uVar1 = ((typeof(GisketchArabicText))._2). cctor_finished_or_no_cctor;
			pSVar3 = line.SenderName;
		}
		if (uVar1 == 0) {
		}
		pSVar3 = GisketchArabicText.ToVisual(pSVar3, false);
		if (line.BodyText == null) {
			uVar1 = (typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor;
			pSVar4 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			uVar1 = (typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor;
			pSVar4 = line.BodyText;
		}
		if (uVar1 == 0) {
		}
		pSVar4 = GisketchArabicText.ToVisual(pSVar4, false);
		pSVar5 = line.SenderID.ToString();
		pSVar5 = String.Concat("<link=\"", pSVar5, "\">") ;
		if ((((pSVar7 != null) && (pSVar5 != null)) &&(pSVar2 != null)) && (pSVar3 != null)) {
			UVar6.SourceStartIndex =pSVar7._stringLength + pSVar2._stringLength + pSVar5._stringLength;
			UVar6.SourceEndIndex = pSVar3._stringLength + UVar6.SourceStartIndex;
			*local_38 = UVar6;
			local_40 = pSVar4;
			if (extraNameReservePixels <= 0.0) {
				pSVar4 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				provider = CultureInfo.InvariantCulture;
				pSVar4 = local_44.ToString("0.###", (IFormatProvider)provider);
				pSVar4 = String.Concat("<space=", pSVar4, ">");
			}
			values = (String[])new string[7];
			if (values != null) {
				if ((int)values.Length != 0) {
					values[0] = pSVar7;
					if ((values.Length & 0xfffffffe) != 0) {
						values[1] = pSVar5;
						if (2 < (uint)values.Length) {
							values[2] = pSVar2;
							if ((values.Length & 0xfffffffc) != 0) {
								values[3] = pSVar3;
								if (4 < (uint)values.Length) {
									values[4] = pSVar4;
									if (5 < (uint)values.Length) {
										values[5] = "</link>";
										if (6 < (uint)values.Length) {
											values[6] = local_40;
											pSVar7 = String.Concat(values);
											return pSVar7;
										}
									}
								}
							}
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
		throw new NullReferenceException();
	}
}
