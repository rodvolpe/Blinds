var jam = {
	
	fInit : function(){
		jam.fShowPicture();
	},
	
	fShowPicture : function(){
		jQuery('.view-id-game .views-row .views-field-field-default-image img').bind('click', function(){
			var thisImg = jQuery(this);
			var thisImgParent = thisImg.closest('.views-row');
			var hiddenImg = thisImgParent.find('.views-field-field-hover-image');
			var foundJamaican = thisImgParent.find('.jamaican-yes');
			console.log(foundJamaican);
			
			thisImg.hide();
			
			hiddenImg.slideDown();
			//thisImg.slideUp();
			//console.log(hiddenImg);
		});
		//alert('whater');
	}
	
}

jQuery(function(){
	jam.fInit();
});
