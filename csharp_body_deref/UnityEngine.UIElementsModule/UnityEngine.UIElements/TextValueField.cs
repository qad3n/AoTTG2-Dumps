using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000115")]
[MovedFrom(true, "UnityEditor.UIElements", "UnityEditor.UIElementsModule", null)]
public abstract class TextValueField<TValueType> : TextInputBaseField<TValueType>, IValueField<TValueType>
{
	[Token(Token = "0x2000116")]
	protected abstract class TextValueInput : TextInputBase
	{
		[Token(Token = "0x17000150")]
		private TextValueField<TValueType> textValueFieldParent
		{
			[Token(Token = "0x600076E")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000151")]
		protected abstract string allowedCharacters
		{
			[Token(Token = "0x6000771")]
			get;
		}

		[Token(Token = "0x17000152")]
		public string formatString
		{
			[Token(Token = "0x6000772")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000773")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x600076F")]
		protected TextValueInput()
		{
		}

		[Token(Token = "0x6000770")]
		internal override bool AcceptCharacter(char c)
		{
			return default(bool);
		}

		[Token(Token = "0x6000774")]
		public abstract void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, TValueType startValue);

		[Token(Token = "0x6000775")]
		public void StartDragging()
		{
		}

		[Token(Token = "0x6000776")]
		public void StopDragging()
		{
		}

		[Token(Token = "0x6000777")]
		protected abstract string ValueToString(TValueType value);

		[Token(Token = "0x6000778")]
		protected override TValueType StringToValue(string str)
		{
			return (TValueType)null;
		}
	}

	[Token(Token = "0x400049B")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty formatStringProperty;

	[Token(Token = "0x400049C")]
	[FieldOffset(Offset = "0x0")]
	private BaseFieldMouseDragger m_Dragger;

	[Token(Token = "0x400049D")]
	[FieldOffset(Offset = "0x0")]
	internal bool m_UpdateTextFromValue;

	[Token(Token = "0x400049E")]
	[FieldOffset(Offset = "0x0")]
	private bool m_ForceUpdateDisplay;

	[Token(Token = "0x1700014E")]
	private TextValueInput textValueInput
	{
		[Token(Token = "0x600075B")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700014F")]
	[CreateProperty]
	public string formatString
	{
		[Token(Token = "0x600075C")]
		get
		{
			return null;
		}
		[Token(Token = "0x600075D")]
		set
		{
		}
	}

	[Token(Token = "0x600075E")]
	protected TextValueField(string label, int maxLength, TextValueInput textValueInput)
	{
	}

	[Token(Token = "0x600075F")]
	public abstract void ApplyInputDeviceDelta(Vector3 delta, DeltaSpeed speed, TValueType startValue);

	[Token(Token = "0x6000760")]
	public void StartDragging()
	{
	}

	[Token(Token = "0x6000761")]
	public void StopDragging()
	{
	}

	[Token(Token = "0x6000762")]
	internal override void UpdateValueFromText()
	{
	}

	[Token(Token = "0x6000763")]
	internal override void UpdateTextFromValue()
	{
	}

	[Token(Token = "0x6000764")]
	private void OnIsReadOnlyChanged(bool newValue)
	{
	}

	[Token(Token = "0x6000765")]
	internal virtual bool CanTryParse(string textString)
	{
		return default(bool);
	}

	[Token(Token = "0x6000766")]
	protected void AddLabelDragger<TDraggerType>()
	{
	}

	[Token(Token = "0x6000767")]
	private void EnableLabelDragger(bool enable)
	{
	}

	[Token(Token = "0x6000768")]
	public override void SetValueWithoutNotify(TValueType newValue)
	{
	}

	[Token(Token = "0x6000769")]
	[EventInterest(new Type[]
	{
		typeof(BlurEvent),
		typeof(FocusEvent)
	})]
	protected override void ExecuteDefaultAction(EventBase evt)
	{
	}

	[Token(Token = "0x600076A")]
	internal override void OnViewDataReady()
	{
	}

	[Token(Token = "0x600076B")]
	internal override void RegisterEditingCallbacks()
	{
	}

	[Token(Token = "0x600076C")]
	internal override void UnregisterEditingCallbacks()
	{
	}
}
